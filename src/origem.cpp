#include "origem.h"
#include <QDebug>

Origem::Origem(QObject *parent) : QObject(parent)
{

}

void Origem::fazX(int x)
{
    qInfo() << "Recebido " << x;
    emit op2(x);
}
