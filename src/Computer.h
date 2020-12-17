//
// Created by Александр Мангазеев on 12.12.2020.
//

#ifndef COMPUTER_COMPUTER_H
#define COMPUTER_COMPUTER_H


#include "IProcessor.h"

class Computer {
private:
    IProcessor* processor;

public:
    Computer(IProcessor* processor);
    ~Computer();
    QString showComputer();

};


#endif //COMPUTER_COMPUTER_H
