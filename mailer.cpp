#include "mailer.h"
#include <QtNetwork>
#include <QDebug>
#include <QSslSocket>

mailer::mailer() {}

int mailer::sendEmail(const QString& recipientEmail, const QString& subject, const QString& body) {
    qDebug() << "Starting email sending process...";

    // SMTP server information
    QString smtpServer = "smtp.gmail.com";
    int smtpPort = 465;
    QString username = "islemsouid04@gmail.com";   // Replace with your email
    QString password = "wbfl bsvo llzt rrjv";     // Replace with your app-specific password

    // Sender and recipient information
    QString from = "waveworx@gmail.com";      // Replace with your email

    // Create a TCP socket
    QSslSocket socket;

    // Connect to the SMTP server
    socket.connectToHostEncrypted(smtpServer, smtpPort);
    if (!socket.waitForConnected()) {
        qDebug() << "Error: Failed to connect to the server -" << socket.errorString();
        return -1;
    }
    qDebug() << "Connected to SMTP server.";

    // Wait for the greeting from the server
    if (!socket.waitForReadyRead()) {
        qDebug() << "Error: No response after connecting -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (Greeting):" << socket.readAll();

    // Send the HELO command
    socket.write("HELO localhost\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during HELO command -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (HELO):" << socket.readAll();

    // Send authentication commands
    socket.write("AUTH LOGIN\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during AUTH LOGIN -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (AUTH LOGIN):" << socket.readAll();

    // Send the username
    socket.write(QByteArray().append(username.toUtf8()).toBase64() + "\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during username transmission -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (Username):" << socket.readAll();

    // Send the password
    socket.write(QByteArray().append(password.toUtf8()).toBase64() + "\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during password transmission -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (Password):" << socket.readAll();

    // Send the MAIL FROM command
    socket.write("MAIL FROM:<" + from.toUtf8() + ">\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during MAIL FROM -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (MAIL FROM):" << socket.readAll();

    // Send the RCPT TO command
    socket.write("RCPT TO:<" + recipientEmail.toUtf8() + ">\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during RCPT TO -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (RCPT TO):" << socket.readAll();

    // Send the DATA command
    socket.write("DATA\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during DATA -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (DATA):" << socket.readAll();

    // Send the email content
    socket.write("From: \"WaveWorx\" <" + from.toUtf8() + ">\r\n");
    socket.write("To: <" + recipientEmail.toUtf8() + ">\r\n");
    socket.write("Subject: " + subject.toUtf8() + "\r\n");
    socket.write("MIME-Version: 1.0\r\n");
    socket.write("Content-Type: text/plain; charset=\"UTF-8\"\r\n");
    socket.write("\r\n"); // Empty line before the body
    socket.write(body.toUtf8() + "\r\n.\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during email content transmission -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (Email Content):" << socket.readAll();

    // Send the QUIT command
    socket.write("QUIT\r\n");
    if (!socket.waitForBytesWritten() || !socket.waitForReadyRead()) {
        qDebug() << "Error: Failed during QUIT -" << socket.errorString();
        return -1;
    }
    qDebug() << "Server Response (QUIT):" << socket.readAll();

    // Close the socket
    socket.close();
    qDebug() << "Email sent successfully. Connection closed.";
    return 0;
}
