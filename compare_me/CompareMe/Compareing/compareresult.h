#ifndef COMPARERESULT_H
#define COMPARERESULT_H

#include <Compareing/compareanalyse.h>
class CompareResult
{
public:
    CompareResult(bool error,CompareAnalyse analyse);

    bool isError();

    CompareAnalyse GetAnalyse();

private:
    bool ERROR;

    CompareAnalyse Analyse;

};

#endif // COMPARERESULT_H
