#include"SString.h"
int main()
{
	SString S;
	char str[] = "abcd";
	int d = StrAssign(&S, str);
	printf("%d\n", d);
	printf("%s\n", S.data);
	char str1[] = "efgh";
	int d1 = StrCopy(&S, str1);
	printf("%d\n", d1);
	printf("%s\n",S.data);
	int d2 = Strcat(&S, str);
	printf("%d\n", d2);
	printf("%s\n", S.data);
	char str2[] = "hab";
	int d3 = SubSearch(&S, str2);
	printf("%d\n", d3);
	return 0;
}