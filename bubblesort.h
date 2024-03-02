#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "sortingstrategy.h"

class BubbleSort : public SortingStrategy
{
public:
    void sort(std::vector<int> &array) override;
};

#endif
