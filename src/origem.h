#ifndef ORIGEM_H
#define ORIGEM_H

#include <QObject>

class Origem : public QObject
{
    Q_OBJECT
public:
    explicit Origem(QObject *parent = nullptr);
    void fazX(int);

signals:
    void op2(int );

public slots:
};

#endif // ORIGEM_H
