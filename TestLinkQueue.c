#include"LinkQueue.h"

int main()
{
	LinkQueue Q;
	int i;
	InitLinkQueue(&Q);
	do
	{
		Menu();
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			EnLinkQueue(&Q);
			break;
		case 2:
			DeLinkQueue(&Q);
			break;
		case 3:
			GetTopLQ(&Q);
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