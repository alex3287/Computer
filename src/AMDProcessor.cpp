//
// Created by Александр Мангазеев on 17.12.2020.
//

#include "AMDProcessor.h"

AMDProcessor::AMDProcessor(QString version, int speed, ProcessorType procType): version(version), speed(speed), procType(procType) {
}

QString AMDProcessor::getVersion() {
    return "Processor version AMD " + version;
}

QString AMDProcessor::getSpeed() {
    QString num;
    return "Processor speed AMD " + num.setNum(speed);
}

QString AMDProcessor::getType() {
    QString num;
    return "Processor type testAMD " + num.setNum(procType);
}