#ifndef SORTINGSTRATEGY_H
#define SORTINGSTRATEGY_H

#include <vector>

class SortingStrategy
{
public:
    virtual void sort(std::vector<int> &array) = 0;
};

#endif
