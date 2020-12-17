#include <QString>
#include <QTextStream>
#include "IntelProcessor.h"
#include "AMDProcessor.h"

enum ProcessorType
{
    x86,
    x64
};

int main() {
    QTextStream out(stdout);
    out<<"hello world"<<endl;
    ProcessorType s = x64;
    out<<s<<endl;
    IntelProcessor Ab("Intel-1", 15, IProcessor::x64);
    out<<Ab.getVersion()<<endl;
    out<<Ab.getProcessorInfo()<<endl;

    AMDProcessor amdProc("AMD-1", 20, IProcessor::x86);
    out<<amdProc.getVersion()<<endl;

    return 0;
}
