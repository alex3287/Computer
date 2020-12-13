//
// Created by Александр Мангазеев on 12.12.2020.
//

#include "IProcessor.h"

QTextStream out(stdout);

IProcessor::~IProcessor() {
    out<<"Bay-Bay"<<endl;
}
//
//QString IProcessor::getVersion() {
//    return "Processor version ";
//}
//
//QString IProcessor::getType() {
//    return "Processor type ";
//}
//
//QString IProcessor::getSpeed() {
//    return "Processor speed ";
//}
//
QString IProcessor::getProcessorInfo() {
    return "Processor for:\n1. " + getVersion() +"\n2. "+ getType()+"\n3. "+ getSpeed();
}
