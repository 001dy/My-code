#include"My_Stack.h"


int main()
{
	SqStack S;
	int i;
	char c;
	InitStack(&S);
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			Push(&S);
			break;
		case 2:
			Pop(&S, &c);
			printf("%c", c);
			break;
		case 3:
			Delete(&S);
			break;
		case 4:
			Modify(&S);
			break;
		case 5:
			GetTop(&S, &c);
			printf("%c", c);
			break;
		case 0:
			printf("ÍË³ö³ÌÐò!\n");
			break;
		default:
			break;
		}
	} while (i);
}