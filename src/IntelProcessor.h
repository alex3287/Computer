//
// Created by Александр Мангазеев on 12.12.2020.
// Конкретный класс для процессора Интел

#ifndef COMPUTER_INTELPROCESSOR_H
#define COMPUTER_INTELPROCESSOR_H

#include "IProcessor.h"

class IntelProcessor: public IProcessor {
private:
    QString version;
    int speed;
    ProcessorType procType;

public:
    IntelProcessor(QString version, int speed, ProcessorType procType);
    QString getVersion();
    QString getType();
    QString getSpeed();
};


#endif //COMPUTER_INTELPROCESSOR_H
