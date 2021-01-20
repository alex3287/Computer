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

QString Computer::showProcessor() {
//    return "This computer has processor " + processor -> getVersion();
    return "Your computer include: \n"+processor->getProcessorInfo();
}