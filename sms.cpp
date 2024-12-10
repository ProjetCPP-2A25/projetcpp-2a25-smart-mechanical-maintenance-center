/*#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include "sms.h"



QString twilio_number = "+12183538964";


sms::sms(){

}
void sms::sendSMS(const QString &to, const QString &message) {
    QNetworkAccessManager *manager = new QNetworkAccessManager();

    QUrl url("https://api.twilio.com/2010-04-01/Accounts/AC5708d5b3603de10b74b83f0305907d04/Messages.json");

    QNetworkRequest request(url);

    QString credentials = "AC0f688d11a3bddda829251ffe06afa268:4a958ed745b66cb51344435cb343f0b1";
    QByteArray base64Credentials = credentials.toUtf8().toBase64();
    request.setRawHeader("Authorization", "Basic " + base64Credentials);

    QByteArray postData;
    postData.append("From=" + twilio_number.toUtf8() + "&");
    postData.append("To=" + to.toUtf8() + "&");
    postData.append("Body=" + message.toUtf8());

    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    QNetworkReply *reply = manager->post(request, postData);

    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "SMS sent successfully";
        } else {
            qDebug() << "Failed to send SMS:" << reply->errorString();
        }

        reply->deleteLater();
        manager->deleteLater();
    });
}
*/
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include "sms.h"

// Replace with your Twilio number
const QString twilio_number = "+12183538964";

// Constructor
sms::sms() {
}

// Method to send SMS
void sms::sendSMS(const QString &to, const QString &message) {
    // Create QNetworkAccessManager
    QNetworkAccessManager *manager = new QNetworkAccessManager();

    // Twilio API URL
    QUrl url("https://api.twilio.com/2010-04-01/Accounts/AC0f688d11a3bddda829251ffe06afa268/Messages.json");

    // Set up the request
    QNetworkRequest request(url);

    // Set the Authorization header
    QString accountSID = "AC0f688d11a3bddda829251ffe06afa268";
    QString authToken = "4a958ed745b66cb51344435cb343f0b1";
    QString credentials = accountSID + ":" + authToken;
    QByteArray base64Credentials = credentials.toUtf8().toBase64();
    qDebug() << "Authorization Header:" << "Basic " + base64Credentials;

    request.setRawHeader("Authorization", "Basic " + base64Credentials);

    // Encode the post data
    QUrlQuery postData;
    postData.addQueryItem("From", twilio_number);
    postData.addQueryItem("To", to);
    postData.addQueryItem("Body", message);

    // Set the content type
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Send the POST request
    QNetworkReply *reply = manager->post(request, postData.toString(QUrl::FullyEncoded).toUtf8());

    // Handle the reply
    QObject::connect(reply, &QNetworkReply::finished, manager, [=]() {
        // Read HTTP status code
        int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        QByteArray responseBody = reply->readAll();

        // Handle response
        if (reply->error() == QNetworkReply::NoError && statusCode == 201) {
            qDebug() << "SMS sent successfully. Response:" << responseBody;
        } else {
            qDebug() << "Failed to send SMS. HTTP status:" << statusCode;
            qDebug() << "Error:" << reply->errorString();
            qDebug() << "Response:" << responseBody;
        }

        // Cleanup
        reply->deleteLater();
        manager->deleteLater();
    });
}
