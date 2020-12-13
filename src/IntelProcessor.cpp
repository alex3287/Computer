//
// Created by Александр Мангазеев on 12.12.2020.
//

#include "IntelProcessor.h"

IntelProcessor::IntelProcessor(QString version, int speed, ProcessorType procType): version(version), speed(speed), procType(procType) {
}

QString IntelProcessor::getVersion() {
    return "Processor version Intel " + version;
}

QString IntelProcessor::getSpeed() {
    QString num;
    return "Processor speed " + num.setNum(speed);
}

QString IntelProcessor::getType() {
    QString num;
    return "Processor type testIntel " + num.setNum(procType);
}