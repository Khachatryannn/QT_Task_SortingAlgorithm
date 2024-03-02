#include "sortingapplication.h"
#include "bubblesort.h"
#include "selectionsort.h"
#include <iostream>

SortingApplication::SortingApplication()
{
    sortingStrategy = nullptr;
}

void SortingApplication::runSortingProcess()
{
    QString inputFile = getInputFileName();
    QString outputFile = getOutputFileName();
    sortingStrategy = getSortingStrategy();

    std::vector<int> array = fileHandler.readArrayFromFile(inputFile);
    if (sortingStrategy)
        sortingStrategy->sort(array);
    fileHandler.saveArrayToFile(outputFile, array);
}

QString SortingApplication::getInputFileName()
{
    std::cout << "Enter input file name: ";
    QString fileName;
    // std::cin >> fileName;
    return fileName;
}

QString SortingApplication::getOutputFileName()
{
    std::cout << "Enter output file name: ";
    QString fileName;
    // std::cin >> fileName;
    return fileName;
}

SortingStrategy* SortingApplication::getSortingStrategy()
{
    std::cout << "Choose sorting algorithm:\n"
              << "1. Bubble Sort\n"
              << "2. Selection Sort\n"
              << "Enter your choice: ";
    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
        return new BubbleSort();
    case 2:
        return new SelectionSort();
    default:
        std::cout << "Invalid choice, defaulting to Bubble Sort.\n";
        return new BubbleSort();
    }
}


// SortingStrategy* SortingApplication::getSortingStrategy()
// {
//     std::cout << "Choose sorting algorithm:\n"
//               << "1. Bubble Sort\n"
//               << "2. Selection Sort\n"
//               << "Enter your choice: ";
//     int choice;
//     std::cin >> choice;

//     switch (choice) {
//     case 1:
//         return new BubbleSort();
//     case 2:
//         return new SelectionSort();
//     default:
//         std::cout << "Invalid choice, defaulting to Bubble Sort.\n";
//         return new BubbleSort();
//     }
// }


// void runSortingProcess() {
//     std::string inputFile, outputFile;
//     std::cout << "Enter input file name: ";
//     std::cin >> inputFile;
//     std::cout << "Enter output file name: ";
//     std::cin >> outputFile;
//     std::cout << "Choose sorting algorithm:\n"
//                  "1. Bubble Sort\n"
//                  "2. Selection Sort\n"
//                  "Enter your choice: ";
//     int choice;
//     std::cin >> choice;

//     std::vector<int> array = fileHandler.readArrayFromFile(inputFile);
//     switch (choice) {
//     case 1: {
//         BubbleSort bubbleSort;
//         bubbleSort.sort(array);
//         break;
//     }
//     case 2: {
//         SelectionSort selectionSort;
//         selectionSort.sort(array);
//         break;
//     }
//     default:
//         std::cout << "Invalid choice\n";
//         return;
//     }
//     fileHandler.saveArrayToFile(outputFile, array);
//     std::cout << "Sorting completed.\n";
// }

