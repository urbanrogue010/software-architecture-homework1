#include "head.h"
#define ELENum  10
vector<int> ans;
int main()
{
	showText();
	rnumGenerate(ans,ELENum);
	rnumSort(ans,ELENum);
	rnumShow(ans,ELENum);
	cin.get();
	return 0;
}

