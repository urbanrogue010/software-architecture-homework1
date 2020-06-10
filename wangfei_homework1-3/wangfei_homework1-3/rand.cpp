#include "rand.hpp"
#include <assert.h>
void GenerateArrayOfRandNumber(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);														//��Լʽ���ж��������鳤���Ƿ���ȷ

	srand((unsigned int)(time(0)));												//�����������

	while (--iArrlen >= 0) {
        assert(iArrlen>=0);
		iArrayOfRandNumber.push_back(rand() % 100);								//����100���������������������
	}
}
void SortArrayOfRandNumber(vector<int>& iArrayOfRandNumber, int iArrlen) {
	assert(iArrlen > 0);														//��Լʽ���ж��������鳤���Ƿ���ȷ

	bool bFlagOfSortedArray = false;											//������ɱ�־λ

	while (!bFlagOfSortedArray) {												//��������
		bFlagOfSortedArray = true;												//ÿһ��ð��Ĭ��Ϊ����ɹ�
		for (int iLoop = 1; iLoop < iArrlen; ++iLoop) {							//����
			assert(iLoop >= 1 && iLoop < iArrlen);								//���ԣ���֤���鲻��Խ��
			if (iArrayOfRandNumber[iLoop - 1] > iArrayOfRandNumber[iLoop]) {    //�Ƚ�����Ԫ�ش�С��������
				swap(iArrayOfRandNumber[iLoop - 1], iArrayOfRandNumber[iLoop]);
				bFlagOfSortedArray = false;										//����������Ϊ�����־λ�÷�
			}
		}
		--iArrlen;
	}
}

