#include "compareresult.h"

CompareResult::CompareResult(bool error,CompareAnalyse analyse)
{
    this->ERROR = error;

    this->Analyse = analyse;
}

bool CompareResult::isError()
{
    return this->ERROR;
}

CompareAnalyse CompareResult::GetAnalyse()
{
    return this->Analyse;
}
