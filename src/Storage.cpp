//
// Created by Александр Мангазеев on 21.01.2021.
//

#include "Storage.h"

void Storage::addProcessor(IProcessor *proc) {
        processors.push_back(proc);
    };

void Storage::getProcessors(){
        QTextStream out(stdout);
        int k = 0;
        for (auto proc: processors) {
            out<<endl;
            out<<++k<<" ";
            out<<proc->getProcessorInfo()<<endl;
            out<<"----------------------------------"<<endl;
        }
    }

int Storage::getLen(){
        return processors.size();
    }
