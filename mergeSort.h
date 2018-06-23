/*
 * =====================================================================================
 *
 *       Filename:  mergeSort.h
 *
 *    Description:  Include file for the mergeSort Algorithm
 *
 *        Version:  1.0
 *        Created:  10/16/2017 07:47:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aditya Raman
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

void printVec(const std::vector<int>& a);

std::vector<int> merge(const std::vector<int>& l, const std::vector<int>& r);

std::vector<int> mergeSort(const std::vector<int>& a);
