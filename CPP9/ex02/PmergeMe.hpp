#pragma once

#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>
#include <utility>
#include <ctime>
#include <iomanip>

class PmergeMe
{
	private : 
		static std::deque<int>	_d;
		static std::vector<int>	_v;
		PmergeMe();
		static void vectorSortPairsContent(std::vector<std::pair<int, int> > &v);
		static void vectorSortPairs(std::vector<std::pair<int, int> > &v);
		static void vectorSortInsert(std::vector<std::pair<int, int> > &v, std::pair<bool, int> &unp);
		static void dequeSortPairsContent(std::deque<std::pair<int, int> > &v);
		static void dequeSortPairs(std::deque<std::pair<int, int> > &v);
		static void dequeSortInsert(std::deque<std::pair<int, int> > &v, std::pair<bool, int> &unp);

	public :
		PmergeMe(const PmergeMe &ref);
		PmergeMe& operator=(const PmergeMe &ref);
		~PmergeMe();
		static std::vector<int> getV();

		static void fillContainers(int argc, char **argv);
		static void printContainers(std::string);
		static double vectorSort();
		static double dequeSort();


};

/*    for (std::vector<std::pair<int, int> > it = pairs.begin(); it != pairs.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
    }*/