/*
����������
ѧ�ţ�31904044
��λ����������ѧ
*/
#include "display.hpp"
#include "rand.hpp"
#define NUMBER_OF_ARRAY_ELEMENTS  10
int main()
{
	vector<int> iArrayOfRandNumber;

	DisplayText();

	GenerateArrayOfRandNumber(iArrayOfRandNumber,NUMBER_OF_ARRAY_ELEMENTS);

	SortArrayOfRandNumber(iArrayOfRandNumber,NUMBER_OF_ARRAY_ELEMENTS);

	DisplayAnswerArray(iArrayOfRandNumber,NUMBER_OF_ARRAY_ELEMENTS);

	cin.get();
	return 0;
}

