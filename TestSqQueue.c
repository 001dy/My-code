#include"SqQueue.h"
int main()
{
	SqQueue Q;
	int i;
	InitQueue(&Q);
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			EnQueue(&Q);
			break;
		case 2:
			DeQueue(&Q);
			break;
		case 3:
			My_Printf(&Q);
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