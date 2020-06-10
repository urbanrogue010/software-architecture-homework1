#include "head.h"
#include <assert.h>
void rnumGenerate(vector<int>& Ans, int n) {
	srand(int(time(0)));                            //产生随机种子
	while (--n >= 0) {
        assert(n>=0);
		Ans.push_back(rand() % 100);                //生成100以内随机数并放入容器中
	}
}
void rnumSort(vector<int>& Ans, int n) {
	bool sorted = false;                            //排序完成标志位
	while (!sorted) {                               //进入排序
		sorted = true;                              //每一轮冒泡默认为排序成功
		for (int i = 1; i < n; ++i) {               //排序
			assert(i-1 >= 0);                       //断言，保证数组不会越界
			if (Ans[i - 1] > Ans[i]) {              //比较相邻元素大小，并交换
				swap(Ans[i - 1], Ans[i]);
				sorted = false;                     //发生交换行为，则标志位置否
			}
		}
		--n;
	}
}
void rnumShow(vector<int>& Ans, int n) {
	for (int i = 0; i < n; ++i) {
		if (i % 5 == 0) cout << "\n\n" << "\t\t";
		assert(i<n);
		cout << setw(3) << setiosflags(ios::left) << Ans[i] << " ";//输出格式：宽度为3左对齐，每5个元素换行
	}
	cout << endl;

}
void showText() {
	cout << "//------------------【随机数生成】------------------\n";
	cout << "//需求：编程随机生成10个100以内的随机数排序并显示\n";
	cout << "//作者:王飞\n";
	cout << "//--------------------------------------------------\n";

}
