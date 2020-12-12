//
// Created by Александр Мангазеев on 12.12.2020.
//

#ifndef COMPUTER_INTELPROCESSOR_H
#define COMPUTER_INTELPROCESSOR_H

#include "IProcessor.h"

class IntelProcessor {
private:
    QString version;
    int speed;
    int procType; //fixme

public:
    IntelProcessor(QString version, int speed, int procType);
    QString getVersion();
    QString getType();
    QString getSpeed();
};


#endif //COMPUTER_INTELPROCESSOR_H
