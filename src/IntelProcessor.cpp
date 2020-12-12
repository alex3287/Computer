//
// Created by Александр Мангазеев on 12.12.2020.
//

#include "IntelProcessor.h"

IntelProcessor::IntelProcessor(QString version, int speed, int procType): version(version), speed(speed), procType(procType) {}

QString IntelProcessor::getVersion() {
    return "Processor version Intel";
}

QString IntelProcessor::getSpeed() {
    return "Processor speed 10";
}

QString IntelProcessor::getType() {
    return "Processor type testIntel ";
}