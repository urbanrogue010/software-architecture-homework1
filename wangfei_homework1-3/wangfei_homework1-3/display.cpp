#include "display.hpp"
#include <assert.h>

void DisplayText() {
	cout << "//------------------����������ɡ�------------------\n";
	cout << "//���󣺱���������10��100���ڵ������������ʾ\n";
	cout << "//����:����\n";
	cout << "//--------------------------------------------------\n";

}

void DisplayAnswerArray(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);																			//��Լʽ���ж��������鳤���Ƿ���ȷ

	for (int iLoopOfArray = 0; iLoopOfArray < iArrlen; ++iLoopOfArray) {							//ѭ���������Ԫ��
		assert(iLoopOfArray < iArrlen && iLoopOfArray >= 0);										//�ж��Ƿ��������

		if ( 0 == iLoopOfArray % 5 ) cout << "\n\n" << "\t\t";										//�����ʽ�����Ϊ3����룬ÿ5��Ԫ�ػ���
		cout << setw(3) << setiosflags(ios::left) << iArrayOfRandNumber[iLoopOfArray] << " ";	
	}
	cout << endl;

}
