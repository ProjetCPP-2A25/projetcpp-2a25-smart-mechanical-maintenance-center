#ifndef ARDUINO2_H
#define ARDUINO2_H
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>


class arduino
{
public:     //méthodes de la classe Arduino
    arduino();
    int connect_arduino2(); // permet de connecter le PC à Arduino
    int close_arduino2(); // permet de femer la connexion
    void write_to_arduino2( QByteArray ); // envoyer des données vers arduino
    QByteArray read_from_arduino2();  //recevoir des données de la carte Arduino
    QSerialPort* getserial2();   // accesseur
    QString getarduino_port_name2();
private:
    QSerialPort * serial2; //Cet objet rassemble des informations (vitesse, bits de données, etc.)
    //et des fonctions (envoi, lecture de réception,…) sur ce qu’est une voie série pour Arduino.
    static const quint16 arduino_uno_vendor_id=9025;
    static const quint16 arduino_uno_producy_id=67;
    QString arduino_port_name2;
    bool arduino_is_available2;
    QByteArray data2;  // contenant les données lues à partir d'Arduino
};



#endif // ARDUINO_H
