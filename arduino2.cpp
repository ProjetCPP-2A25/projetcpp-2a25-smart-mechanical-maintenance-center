#include "arduino2.h"

arduino::arduino()
{
    data2="";


    serial2=new QSerialPort;
}

QString arduino::getarduino_port_name2()
{
    return arduino_port_name2;
}

QSerialPort *arduino::getserial2()
{
    return serial2;
}
int arduino::connect_arduino2()
{
    arduino_port_name2 = "COM8"; // Remplacez par le port correct
    arduino_is_available2 = true;

    serial2->setPortName(arduino_port_name2);
    if (serial2->open(QSerialPort::ReadWrite)) {
        serial2->setBaudRate(QSerialPort::Baud9600);
        serial2->setDataBits(QSerialPort::Data8);
        serial2->setParity(QSerialPort::NoParity);
        serial2->setStopBits(QSerialPort::OneStop);
        serial2->setFlowControl(QSerialPort::NoFlowControl);
        return 0;
    } else {
        qDebug() << "Impossible d'ouvrir le port série.";
        return 1;
    }
}

int arduino::close_arduino2()

{

    if(serial2->isOpen()){
        serial2->close();
        return 0;
    }
    return 1;


}


QByteArray arduino::read_from_arduino2()
{
    if(serial2->isReadable()){
        data2=serial2->readAll(); //récupérer les données reçues

        return data2;
    }
}


void arduino::write_to_arduino2( QByteArray d)

{

    if(serial2->isWritable()){
        serial2->write(d);  // envoyer des donnés vers Arduino
    }else{
        qDebug() << "Couldn't write to serial!";
    }


}
