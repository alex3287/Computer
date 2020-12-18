//
// Created by Александр Мангазеев on 12.12.2020.
// класс компьютер

#ifndef COMPUTER_COMPUTER_H
#define COMPUTER_COMPUTER_H


#include "IProcessor.h"

class Computer {
private:
    IProcessor* processor;

public:
    // внедренее зависимости реализовал через конструктор
    Computer(IProcessor* processor);
    ~Computer();
    QString showProcessor();

};


#endif //COMPUTER_COMPUTER_H
