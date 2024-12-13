#include "hoverfilter.h"
#include <QPropertyAnimation>
#include <QEasingCurve>

// Implémentation de l'animation de secousse
void applyShakeAnimation(QPushButton *button) {
    QPropertyAnimation *shakeAnimation = new QPropertyAnimation(button, "geometry");
    QRect originalGeometry = button->geometry();

    shakeAnimation->setDuration(300);
    shakeAnimation->setKeyValueAt(0.0, originalGeometry);
    shakeAnimation->setKeyValueAt(0.25, originalGeometry.adjusted(10, 0, -10, 0));
    shakeAnimation->setKeyValueAt(0.5, originalGeometry.adjusted(-20, 0, 20, 0));
    shakeAnimation->setKeyValueAt(0.75, originalGeometry.adjusted(10, 0, -10, 0));
    shakeAnimation->setKeyValueAt(1.0, originalGeometry);
    shakeAnimation->setEasingCurve(QEasingCurve::OutQuad);

    shakeAnimation->start(QAbstractAnimation::DeleteWhenStopped);
}

// Constructeur du filtre
HoverFilter::HoverFilter(QObject *parent) : QObject(parent) {}

// Gestion des événements
bool HoverFilter::eventFilter(QObject *watched, QEvent *event) {
    if (event->type() == QEvent::Enter) {
        QPushButton *button = qobject_cast<QPushButton *>(watched);
        if (button) {
            applyShakeAnimation(button);
        }
    }
    return QObject::eventFilter(watched, event);
}
