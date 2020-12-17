//
// Created by Александр Мангазеев on 12.12.2020.
// Класс интерфейс

#ifndef COMPUTER_IPROCESSOR_H
#define COMPUTER_IPROCESSOR_H

#include <QString>
#include <QTextStream>

class IProcessor {

public:
    enum ProcessorType
    {
        x86,
        x64
    };

    ~IProcessor();
    virtual QString getVersion() = 0;
    virtual QString getType() = 0;
    virtual QString getSpeed() = 0;
    QString getProcessorInfo();
};


#endif //COMPUTER_IPROCESSOR_H
