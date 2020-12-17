#include <QString>
#include <QTextStream>
#include "IntelProcessor.h"
#include "AMDProcessor.h"
#include "IProcessor.h"
#include "Computer.h"

enum ProcessorType
{
    x86,
    x64
};

int main() {
    QTextStream out(stdout);

// создадим 2 разных объекта IProcessor
    IProcessor *intel_1 = new IntelProcessor("Intel-1", 15, IProcessor::x64);
    IProcessor *amd_1 = new AMDProcessor("AMD-1", 25, IProcessor::x86);

// создаем объекты компьютеры и внедряем процессоры
    Computer *comp_1 = new Computer(intel_1);
    Computer *comp_2 = new Computer(amd_1);
    out<<comp_1->showComputer()<<endl;
    out<<comp_2->showComputer()<<endl;

    return 0;
}
