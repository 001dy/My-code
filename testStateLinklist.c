#include"StateLinklist.h"

int main()
{
	StateL adrr[SIZE];
	InitStateL(adrr);
	int i = 0;
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			InsertStateL(adrr);
			break;
		case 2:
			DeleteStateL(adrr);
			break;
		case 3:
			ModifyStateL(adrr);
			break;
		case 4:
			SerachStateL(adrr);
			break;
		case 5:
			My_printf(adrr);
			break;
		case 0:
			printf("退出程序！\n");
			break;
		default:
			printf("选择不合法！\n");
			break;
		}
	} while (i);
	return 0;
}