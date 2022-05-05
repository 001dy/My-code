#include"StackUse_Caculate.h"
int main()
{
	char str[] = { '5','7','1','1','+','-','/','3','*','2','1','1','+','+','-','\0' };
	int length = strlen(str);
	printf("%d", length);
	int z =  StackSuffixCalculate(str, length);

	printf("%d", z);
	return 0;
}