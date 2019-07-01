#ifndef DESTINO_H
#define DESTINO_H

#include <QObject>

class Destino : public QObject
{
    Q_OBJECT
public:
    explicit Destino(QObject *parent = nullptr);

signals:

public slots:
    void op2(int );
};

#endif // DESTINO_H
