//
// Created by Александр Мангазеев on 12.12.2020.
//

#include "IProcessor.h"

IProcessor::~IProcessor() {}

QString IProcessor::getVersion() {
    return "Processor version ";
}

QString IProcessor::getType() {
    return "Processor type ";
}

QString IProcessor::getSpeed() {
    return "Processor speed ";
}

QString IProcessor::getProcessorInfo() {
    return "Processor for " + getVersion() + getType() + getSpeed();
}
