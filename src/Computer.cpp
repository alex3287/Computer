//
// Created by Александр Мангазеев on 12.12.2020.
//

#include "Computer.h"



Computer::Computer(IProcessor *processor) {
    this -> processor = processor;
}

Computer::~Computer() {
    delete processor;
}

QString Computer::showComputer() {
    return "This computer has processor " + processor -> getVersion();
}