#include"StackUse_Brackets.h"

int main()
{
	char str[] = "((()))";
	int length = strlen(str);
	int i = BracketCheck(str, length);
	printf("%d", i);
	return 0;
}