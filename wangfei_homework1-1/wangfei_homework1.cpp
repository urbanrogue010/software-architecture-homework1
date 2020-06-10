//first edition
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define ELENum  10
void showText() {
	cout << "//------------------【随机数生成】------------------\n";
	cout << "//需求：编程随机生成10个100以内的随机数排序并显示\n";
	cout << "//作者:王飞\n";
	cout << "//--------------------------------------------------\n";

}
void rnumGenerate(vector<int>& Ans, int n = ELENum);        //生成随机数
void rnumSort(vector<int>& Ans, int n = ELENum);            //随机数由小到大排序（起泡法）
void rnumShow(vector<int>& Ans, int n = ELENum);            //输出结果
vector<int> ans;
int main()
{
	showText();
	rnumGenerate(ans);
	rnumSort(ans);
	rnumShow(ans);
	cin.get();
	return 0;
}
void rnumGenerate(vector<int>& Ans, int n) {
	srand(int(time(0)));                            //产生随机种子
	while (--n >= 0) {
		Ans.push_back(rand() % 100);                //生成100以内随机数并放入容器中
	}
}
void rnumSort(vector<int>& Ans, int n) {
	bool sorted = false;                            //排序完成标志位
	while (!sorted) {                               //进入排序
		sorted = true;                              //每一轮冒泡默认为排序成功
		for (int i = 1; i < n; ++i) {               //排序
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
		cout << setw(3) << setiosflags(ios::left) << Ans[i] << " ";//输出格式：宽度为3左对齐，每5个元素换行
	}
	cout << endl;

}
