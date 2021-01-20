#include <QString>
#include <QTextStream>
#include "IntelProcessor.h"
#include "AMDProcessor.h"
#include "IProcessor.h"
#include "Computer.h"
#include "Storage.h"

enum ProcessorType
{
    x86,
    x64
};


int main() {
    QTextStream out(stdout);
    QTextStream in(stdin);

// создадим 2 разных процессора
    IntelProcessor intel_1("Intel-1", 15, IProcessor::x64);
    AMDProcessor amd_1("AMD-1", 25, IProcessor::x86);

//    Место для хранения созданных процессоров, добавим туда имеющие у нас процессоры
    Storage storage;
    storage.addProcessor(&intel_1);
    storage.addProcessor(&amd_1);

//    Вывод для пользователя. Позволяет выбрать процессор для своего будущего компьютера
    out<<"\nLists processors "<<endl;
    storage.getProcessors();
    out<<"Select number processor's for your computer -> "<<endl;
    int number;
    in>>number;

//    В зависимости от выбора пользователя будет создан компьютер с нужным процессором
    Computer *computer = nullptr;
    if ((number > 0) && (number <= storage.getLen()) ){
        IProcessor *processor = nullptr;
        switch (number) {
            case 1:
                processor = &amd_1;
                break;
            case 2:
                processor = &intel_1;
                break;
        }
        computer = new Computer(processor);
    };

//    Посмотрим какой процессор находится в компьютера
    out<<computer->showProcessor()<<endl;

//    избавимся от объекта, почистим память
    delete computer;
    return 0;
}
