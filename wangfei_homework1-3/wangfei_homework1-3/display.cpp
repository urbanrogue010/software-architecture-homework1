#include "display.hpp"
#include <assert.h>

void DisplayText() {
	cout << "//------------------【随机数生成】------------------\n";
	cout << "//需求：编程随机生成10个100以内的随机数排序并显示\n";
	cout << "//作者:王飞\n";
	cout << "//--------------------------------------------------\n";

}

void DisplayAnswerArray(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);																			//契约式：判断输入数组长度是否正确

	for (int iLoopOfArray = 0; iLoopOfArray < iArrlen; ++iLoopOfArray) {							//循环输出数组元素
		assert(iLoopOfArray < iArrlen && iLoopOfArray >= 0);										//判断是否溢出数组

		if ( 0 == iLoopOfArray % 5 ) cout << "\n\n" << "\t\t";										//输出格式：宽度为3左对齐，每5个元素换行
		cout << setw(3) << setiosflags(ios::left) << iArrayOfRandNumber[iLoopOfArray] << " ";	
	}
	cout << endl;

}
