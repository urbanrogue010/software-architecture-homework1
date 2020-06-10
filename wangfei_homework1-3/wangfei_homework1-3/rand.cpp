#include "rand.hpp"
#include <assert.h>
void GenerateArrayOfRandNumber(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);														//契约式：判断输入数组长度是否正确

	srand((unsigned int)(time(0)));												//产生随机种子

	while (--iArrlen >= 0) {
        assert(iArrlen>=0);
		iArrayOfRandNumber.push_back(rand() % 100);								//生成100以内随机数并放入容器中
	}
}
void SortArrayOfRandNumber(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);														//契约式：判断输入数组长度是否正确

	bool bFlagOfSortedArray = false;											//排序完成标志位

	while (!bFlagOfSortedArray) {												//进入排序
		bFlagOfSortedArray = true;												//每一轮冒泡默认为排序成功
		for (int iLoop = 1; iLoop < iArrlen; ++iLoop) {							//排序
			assert(iLoop >= 1 && iLoop < iArrlen);								//断言，保证数组不会越界
			if (iArrayOfRandNumber[iLoop - 1] > iArrayOfRandNumber[iLoop]) {    //比较相邻元素大小，并交换
				swap(iArrayOfRandNumber[iLoop - 1], iArrayOfRandNumber[iLoop]);
				bFlagOfSortedArray = false;										//发生交换行为，则标志位置否
			}
		}
		--iArrlen;
	}
}

