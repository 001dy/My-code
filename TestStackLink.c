#include"StackLink.h"

int main()
{
	int i;
	StackLink*L = InitSL();
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			PushSL(L);
			break;
		case 2:
			PopSL(L);
			break;
		case 3:
			DeleteSL(L);
			break;
		case 4:
			ModifySL(L);
			break;
		case 5:
			SerachSL(L);
			break;
		case 6:
			GetTop(L);
			break;
		case 0:
			printf("ÍË³ö³ÌÐò!\n");
			break;
		default:
			break;
		}
	} while (i);
	return 0;
}