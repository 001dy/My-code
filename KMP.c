#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

void GetNextVal(const char*p2, int next[])
{
	assert(p2);
	next[0] = -1;
	int j = 1;
	int len2 = strlen(p2);
	for (j; j < len2 - 1; j++)
	{
		if (p2[next[j]] == p2[j])
			next[j] = next[next[j]];
	}
}

void GetNext(const char*p2, int next[])
{
	assert(p2);
	int i = 0, j = -1;
	next[0] = -1;
	int len2 = strlen(p2);
	while (i < len2 - 1)
	{
		if (j == -1 || p2[i] == p2[j])
		{
			++i;
			++j;
			next[i] = j;
		}
		else
			j = next[j];
	}
}

int Index_KMP(const char *p1, const char* p2)
{
	assert(p1&&p2);
	int i = 0, j = 0;
	int len1 = strlen(p1);
	int len2 = strlen(p2);
	int next[7] = {0};
	GetNext(p2, next);
	GetNextVal(p2, next);
	while (i < len1 && j < len2)
	{
		if (j == -1 || p1[i] == p2[j])
		{
			++i;
			++j;
		}
		else
			j = next[j];
	}
	if (j >= len2)
		return i - len2;
	else
		return 0;
}

int main()
{
	char p1[] = "googlogooggoogle";
	char p2[] = "google";
	int d = Index_KMP(p1, p2);
	printf("%d", d);
	return 0;
}