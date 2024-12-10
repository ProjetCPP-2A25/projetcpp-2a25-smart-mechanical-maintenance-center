#ifndef WAVEBOT_H
#define WAVEBOT_H

#include <QString>
#include <QMap>

class WaveBot
{
public:
    WaveBot();  // Constructeur
    QString respondToQuery(const QString& query);  // Méthode pour répondre aux requêtes
    void setCustomResponse(const QString& query, const QString& response);  // Pour ajouter des réponses personnalisées

private:
    QMap<QString, QString> defaultResponses;  // Réponses par défaut
};

#endif // WAVEBOT_H
