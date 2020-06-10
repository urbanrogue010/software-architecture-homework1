#include "head.h"
#include <assert.h>
void rnumGenerate(vector<int>& Ans, int n) {
	srand(int(time(0)));                            //�����������
	while (--n >= 0) {
        assert(n>=0);
		Ans.push_back(rand() % 100);                //����100���������������������
	}
}
void rnumSort(vector<int>& Ans, int n) {
	bool sorted = false;                            //������ɱ�־λ
	while (!sorted) {                               //��������
		sorted = true;                              //ÿһ��ð��Ĭ��Ϊ����ɹ�
		for (int i = 1; i < n; ++i) {               //����
			assert(i-1 >= 0);                       //���ԣ���֤���鲻��Խ��
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
		assert(i<n);
		cout << setw(3) << setiosflags(ios::left) << Ans[i] << " ";//�����ʽ�����Ϊ3����룬ÿ5��Ԫ�ػ���
	}
	cout << endl;

}
void showText() {
	cout << "//------------------����������ɡ�------------------\n";
	cout << "//���󣺱���������10��100���ڵ������������ʾ\n";
	cout << "//����:����\n";
	cout << "//--------------------------------------------------\n";

}
