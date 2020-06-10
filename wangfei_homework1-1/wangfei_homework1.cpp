//first edition
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
#define ELENum  10
void showText() {
	cout << "//------------------����������ɡ�------------------\n";
	cout << "//���󣺱���������10��100���ڵ������������ʾ\n";
	cout << "//����:����\n";
	cout << "//--------------------------------------------------\n";

}
void rnumGenerate(vector<int>& Ans, int n = ELENum);        //���������
void rnumSort(vector<int>& Ans, int n = ELENum);            //�������С�����������ݷ���
void rnumShow(vector<int>& Ans, int n = ELENum);            //������
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
	srand(int(time(0)));                            //�����������
	while (--n >= 0) {
		Ans.push_back(rand() % 100);                //����100���������������������
	}
}
void rnumSort(vector<int>& Ans, int n) {
	bool sorted = false;                            //������ɱ�־λ
	while (!sorted) {                               //��������
		sorted = true;                              //ÿһ��ð��Ĭ��Ϊ����ɹ�
		for (int i = 1; i < n; ++i) {               //����
			if (Ans[i - 1] > Ans[i]) {              //�Ƚ�����Ԫ�ش�С��������
				swap(Ans[i - 1], Ans[i]);
				sorted = false;                     //����������Ϊ�����־λ�÷�
			}
		}
		--n;
	}
}
void rnumShow(vector<int>& Ans, int n) {
	for (int i = 0; i < n; ++i) {
		if (i % 5 == 0) cout << "\n\n" << "\t\t";
		cout << setw(3) << setiosflags(ios::left) << Ans[i] << " ";//�����ʽ�����Ϊ3����룬ÿ5��Ԫ�ػ���
	}
	cout << endl;

}
