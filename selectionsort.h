#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "sortingstrategy.h"

class SelectionSort : public SortingStrategy
{
public:
    void sort(std::vector<int> &array) override;
};

#endif
