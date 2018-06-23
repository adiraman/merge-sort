/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  An example of merge sort algorithm
 *
 *        Version:  1.0
 *        Created:  10/16/2017 12:34:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aditya Raman
 *
 * =====================================================================================
 */

#include "mergeSort.h"
#include <cstdlib>
#include <ctime>

int main(int argc, char* argv[])
{
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << "<vector size> <low val> <high val>" << std::endl;
        return 0;
    }

    int n = atoi(argv[1]);
    std::vector<int> a(n);

    srand(time(nullptr));

    int Lo = atoi(argv[2]);
    int Hi = atoi(argv[3]);

    for (int i = 0; i < n; ++i) {
        a[i] = Lo + (rand() / (RAND_MAX / (Hi - Lo)));
    }

    std::cout << "           Before Sorting         " << std::endl;
    printVec(a);
    std::cout << "           After Sorting         " << std::endl;
    std::vector<int> b = mergeSort(a);
    printVec(b);

    return 0;
}
