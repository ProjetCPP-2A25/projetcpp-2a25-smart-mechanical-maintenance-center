#include "chatbot.h"
#include <QStringList>

Chatbot::Chatbot()
{
    // Réponses par défaut en cas de requêtes incomprises
    defaultResponses["Qui êtes-vous ?"] = "Je suis un chatbot pour vous aider à gérer les informations sur vos clients.";
    defaultResponses["Aidez-moi !"] = "Bien sûr ! Que voulez-vous savoir ?";
}

QString Chatbot::respondToQuery(const QString& query, const clients& client)
{
    // Rechercher des réponses aux requêtes spécifiques
    if (query.contains("historique") || query.contains("interventions")) {
        return getClientHistory(client);

    } else if (query.contains("informations") || query.contains("détails")) {
        return getClientInfo(client);
    }

    // Réponses par défaut
    return defaultResponses.value(query, "Désolé, je n'ai pas compris votre question.");
}

QString Chatbot::getClientHistory(const clients& client)
{
    // Retourner un exemple d'historique
    return "Historique des interventions pour " + client.getNom() + " : Aucune intervention enregistrée.\n";
}

QString Chatbot::getClientInfo(const clients& client)
{
    return "Client: " + client.getNom() + "\nContact: " + client.getContact() + "\nType de bateau: " + client.getTypeBateau();
}
