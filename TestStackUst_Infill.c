#include"StackUse_Infill.h"

int main()
{
	char str[] = "9+5*(6-3)-2/5";
	char suffix[MaxSize] = { 0 };
	int length = strlen(str);
	StackUse_InfillToSuffix(str, suffix, length);
	printf("%s", suffix);
}