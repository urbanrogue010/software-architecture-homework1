#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void showText();
void rnumGenerate(vector<int>& Ans/*O*/, int n/*I*/ );          //生成随机数
void rnumSort(vector<int>& Ans/*IO*/, int n/*I*/ );             //随机数由小到大排序（起泡法）
void rnumShow(vector<int>& Ans/*I*/, int n/*I*/ );              //输出结果


#endif // HEAD_H_INCLUDED
