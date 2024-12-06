#ifndef HOVERFILTER_H
#define HOVERFILTER_H

#include <QObject>
#include <QPushButton>
#include <QEvent>

// Fonction pour ajouter une animation de secousse
void applyShakeAnimation(QPushButton *button);

class HoverFilter : public QObject {
    Q_OBJECT // Nécessaire pour QObject
public:
    explicit HoverFilter(QObject *parent = nullptr);

protected:
    bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // HOVERFILTER_H
