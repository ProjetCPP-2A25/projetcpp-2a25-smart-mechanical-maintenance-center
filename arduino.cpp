#include "arduino.h"

Arduino::Arduino()
{
    data="";


    serial=new QSerialPort;
}

QString Arduino::getarduino_port_name()
{
    return arduino_port_name;
}

QSerialPort *Arduino::getserial()
{
    return serial;
}
int Arduino::connect_arduino()
{
    arduino_port_name = "COM9"; // Remplacez par le port correct
    arduino_is_available = true;

    serial->setPortName(arduino_port_name);
    if (serial->open(QSerialPort::ReadWrite)) {
        serial->setBaudRate(QSerialPort::Baud9600);
        serial->setDataBits(QSerialPort::Data8);
        serial->setParity(QSerialPort::NoParity);
        serial->setStopBits(QSerialPort::OneStop);
        serial->setFlowControl(QSerialPort::NoFlowControl);
        return 0;
    } else {
        qDebug() << "Impossible d'ouvrir le port série.";
        return 1;
    }
}

int Arduino::close_arduino()

{

    if(serial->isOpen()){
        serial->close();
        return 0;
    }
    return 1;


}


QByteArray Arduino::read_from_arduino()
{
    if(serial->isReadable()){
        data=serial->readAll(); //récupérer les données reçues

        return data;
    }
}


void Arduino::write_to_arduino( QByteArray d)

{

    if(serial->isWritable()){
        serial->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }


}
// Vérifie l'état actuel du ventilateur
bool Arduino::is_fan_on() {
    return fanState;
}

// Met à jour l'état du ventilateur
void Arduino::set_fan_state(bool state) {
    fanState = state;
}

