#ifndef SORTINGAPPLICATION_H
#define SORTINGAPPLICATION_H

#include "sortingstrategy.h"
#include "filehandler.h"
#include <QString>

class SortingApplication
{
public:
    SortingApplication();

    void runSortingProcess();

private:
    SortingStrategy *sortingStrategy;
    FileHandler fileHandler;

    QString getInputFileName();
    QString getOutputFileName();
    SortingStrategy* getSortingStrategy();
};

#endif // SORTINGAPPLICATION_H
