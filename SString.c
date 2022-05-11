#include"SString.h"

//赋值操作
int  StrAssign(SString* S, const char*str)
{
	if (S->length >= 29 || strlen(str) >= 29)
		return 0;
	else
	{
		int i = 0;
		/*int len = strlen(str);

		for (i; i<len; i++)
		{
			S->data[i] = *str++;
			S->length++;
		}*/
		while (S->data[i++] = *str++)
			;
		S->length = strlen(S->data);
		return 1;
	}
}

//复制操作
int StrCopy(SString*S, const char*str)
{
	if (S->length >= 29 || strlen(str) >= 29)
		return 0;
	else
	{
		int i = 0;
		while (S->data[i++] = *str++)
			;
		S->length = strlen(S->data);
		return 1;
	}
}

//判空操作
int StrEmpty(SString*S)
{
	if (S->length < 1)
	{
		printf("串为空!\n");
		return 0;
	}
	else
	{
		printf("串不空!\n");
		return 1;
	}
}

//清空
void ClearString(SString*S)
{
	int i = StrEmpty(S);

	while (S->length--&&i == 1)
	{
		S->data[S->length] = '0';
	}
}

//串连接
int Strcat(SString*S, const char*str)
{
	int len = strlen(str);
	int c = S->length + len;
	if (c > MaxSize)
	{
		printf("串长越界，连接失败!\n");
		return 0;
	}
	else
	{
		while (S->data[S->length++] = *str++)
			;
		return 1;
	}

}

//查子串(朴素模式匹配算法)
int SubSearch(SString*S, const char*str)
{
	assert(S != NULL);
	assert(str != NULL);
	int k = 0;
	int i = k, j = 0;
	int len = strlen(str);
	while(i < S->length&&j < len)
	{
		if (S->data[i++] == str[j++])
			;
		else
		{
			k++;
			i = k;
			j = 0;
		}
		/*else
		{
		i = i-j+1;
		j = 0;
		}*/
    }
	if (j >= len)
		return i - len;
	else
		return 0;
}
