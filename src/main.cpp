#include <QCoreApplication>
#include "origem.h"
#include "destino.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Origem o;
    Destino d;

    QObject::connect(&o, &Origem::op2,&d, &Destino::op2);

    o.fazX(3);

    return a.exec();
}
