/*
 * =====================================================================================
 *
 *       Filename:  mergeSort.cpp
 *
 *    Description:  Source file for the merge sort algorithm
 *
 *        Version:  1.0
 *        Created:  10/16/2017 07:50:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aditya Raman
 *
 * =====================================================================================
 */

#include "mergeSort.h"

// The merge subroutine to properly manage the merging of two
// sorted sub arrays :-
std::vector<int> merge(const std::vector<int>& l, const std::vector<int>& r)
{
	std::vector<int> m;
	// declare indices to the left and right sub arrays
	int i{0}, j{0};

	while(i < l.size() && j < r.size())
	{
		if(l[i] > r[j])
		{
			m.push_back(r[j]);
			++j;
		}
		else
		{
			m.push_back(l[i]);
			++i;
		}
	}

	while(i < l.size() && j == r.size())
	{
		m.push_back(l[i]);
		++i;
	}

	while(i == l.size() && j < r.size())
	{
		m.push_back(r[j]);
		++j;
	}

	return m;
}

std::vector<int> mergeSort(const std::vector<int>& a)
{
	// Check for base case to stop the recursion
	int n = a.size();
	if(n <= 1) return a;

	// Partition to Left and Right halves
	std::vector<int> l, r;
	for(int i = 0; i < n; ++i)
	{
		if(i < n/2)	l.push_back(a[i]);
		else r.push_back(a[i]);
	}

	// Recursively sort the left and right sub arrays
	std::vector<int> l1 = mergeSort(l);
	std::vector<int> r1 = mergeSort(r);

	// Merge the sorted left and right halves procedurally
	return merge(l1, r1);
}

void printVec(const std::vector<int>& a)
{
	for(auto i: a)
	{
		std::cout << i << ", ";
	}
	std::cout << std::endl;
}


