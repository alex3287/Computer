#include <QString>
#include <QTextStream>
#include "IntelProcessor.h"

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
    IntelProcessor Ab("Test", 15, IProcessor::x64);
    out<<Ab.getVersion()<<endl;
    out<<Ab.getProcessorInfo()<<endl;

    return 0;
}
