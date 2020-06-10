#ifndef _RAND_HPP_559e27d03d124cfa988793acce10a1f2
#define _RAND_HPP_559e27d03d124cfa988793acce10a1f2


#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

//生成随机数数组
void GenerateArrayOfRandNumber(vector<int>& iArrayOfRandNumber/*IO*/, int iArrlen/*I*/ ); 

//随机数由小到大排序（起泡法）
void SortArrayOfRandNumber(vector<int>& iArrayOfRandNumber/*IO*/, int iArrlen/*I*/ );             


#endif
