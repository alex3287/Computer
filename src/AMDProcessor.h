//
// Created by Александр Мангазеев on 17.12.2020.
//

#ifndef COMPUTER_AMDPROCESSOR_H
#define COMPUTER_AMDPROCESSOR_H

#include "IProcessor.h"

class AMDProcessor: public IProcessor {
private:
    QString version;
    int speed;
    ProcessorType procType;

public:
    AMDProcessor(QString version, int speed, ProcessorType procType);
    QString getVersion();
    QString getType();
    QString getSpeed();
};


#endif //COMPUTER_AMDPROCESSOR_H
