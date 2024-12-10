#ifndef CHATBOT_H
#define CHATBOT_H

#include <QString>
#include <QMap>
#include "clients.h"  // Inclure le fichier clients.h pour interagir avec les données clients

class Chatbot
{
public:
    Chatbot(); // Déclaration du constructeur
    QString respondToQuery(const QString& query, const clients& client);
    QString getClientHistory(const clients& client);
    QString getClientInfo(const clients& client);

private:
    QMap<QString, QString> defaultResponses;  // Réponses par défaut
};

#endif // CHATBOT_H
