#include "wavebot.h"

WaveBot::WaveBot()
{
    // Réponses par défaut pour des questions courantes
    defaultResponses["Qui êtes-vous ?"] = "Je suis WaveBot, un chatbot ici pour vous aider.";
    defaultResponses["Aidez-moi !"] = "Bien sûr ! Que puis-je faire pour vous ?";
    defaultResponses["Que faites-vous ?"] = "Je réponds à vos questions et vous aide avec vos requêtes.";
}

QString WaveBot::respondToQuery(const QString& query)
{
    if (query.isEmpty()) {
        return "Veuillez poser une question.";
    }
    if (query.contains("bonjour", Qt::CaseInsensitive)) {
        return "Bonjour ! Comment puis-je vous aider ?";
    }
    return "Désolé, je n'ai pas compris votre question.";
}

void WaveBot::setCustomResponse(const QString& query, const QString& response)
{
    defaultResponses[query] = response;  // Ajouter une réponse personnalisée
}
