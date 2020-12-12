//
// Created by Александр Мангазеев on 12.12.2020.
//

#ifndef COMPUTER_IPROCESSOR_H
#define COMPUTER_IPROCESSOR_H

#include <QString>

class IProcessor {
public:
    ~IProcessor();
    virtual QString getVersion() = 0;
    virtual QString getType() = 0;
    virtual QString getSpeed() = 0;
    virtual QString getProcessorInfo() = 0;
};


#endif //COMPUTER_IPROCESSOR_H
