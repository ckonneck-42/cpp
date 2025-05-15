#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <sstream>
#include <deque>
#include <stdexcept>
#include <cctype>
#include <vector>
void PmergeMe(std::deque<int> &);
void PmergeMe(std::vector<int> &);
bool isDigit(char *strnum);
void print(const std::vector<int>& vec);
void print(const std::deque<int>& dq);
#endif