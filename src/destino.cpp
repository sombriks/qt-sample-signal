#include "destino.h"
#include <QDebug>

Destino::Destino(QObject *parent) : QObject(parent)
{

}

void Destino::op2(int x)
{
    qInfo() << "No destino " << x * x;
}
