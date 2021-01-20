//
// Created by Александр Мангазеев on 21.01.2021.
//

#ifndef COMPUTER_STORAGE_H
#define COMPUTER_STORAGE_H

#include <QVector>
#include "IProcessor.h"

class Storage {
private:
    QVector<IProcessor* > processors;
public:
    void addProcessor(IProcessor *proc);
    void getProcessors();
    int getLen();
};

#endif //COMPUTER_STORAGE_H
