#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<ctype.h>

int My_Strcmp(const char* p1, const char* p2)
{
	assert(p1&&p2);
	while (*p1 == *p2)
	{
		p1++;
		p2++;
	}
	return *p1 - *p2;
}

char* My_Strncpy(char*dest, const char* source, size_t count)
{
	char *start = dest;
	while (count && (*dest++ = *source++))
		count--;
	if (count)
		while (--count)
			*dest++ = '\0';
	return start;
}
int My_Strncmp(const char*p1, const char*p2, size_t count)
{
	assert(p1&&p2);
	while (count&& *p1 == *p2)
	{
		count--;
		p1++;
		p2++;
	}
	return *p1 - *p2;
}
char* My_Strstr(const char*p1,const char*p2)
{
	assert(p1&&p2);
	char*cp = (char*)p1;
	char*s1, *s2;
	if (*p2 == '\0')
		return (char*)p1;//不同的“const”限定符;需要char*强转
	while (*cp)
	{
		s1 = cp;
		s2 = (char*)p2;//同理
		while (*s1&&*s2 && (*s1 == *s2))
			s1++, s2++;
		if (*s2 == '\0')
			return cp;
		cp++;
	}
	return NULL;
}

void* My_memcpy(void* dest, const void*src, size_t num)
{ 
	void *ret = dest;
	assert(dest&&src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

void*My_memmove(void* dest, const void*src, size_t num)
{
	char*ret = dest;
	char*sr = (char*)src + num-1;
	char*des = (char*)dest + num-1;
	if ((char*)dest <= (char*)src || (char*)dest >= sr)
		return My_memcpy(dest, src, num);
	else
	{
		
		while (num--)
		{
			*des-- = *sr--;
		}
		return dest;
	}
}

int main()
{
	//char p1[20] = "abcdef";
	//char p2[] = "def";
	//char* cp = My_Strstr(p1, p2);
	////My_Strncpy(p1, p2, 7);
	//printf("%s\n", cp);
	////printf("%d\n", d);
	/*char arr[] = "1638879984@qq.com";
	char *p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);*/
	/*char*ret = strtok(buf, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);
	ret = strtok(NULL, p);
	printf("%s\n", ret);*/
	/*char*ret = NULL;
	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
	{
		printf("%s\n", ret);
	}*/

	/*char ch = tolower('q');
	ch = toupper('Q');
	putchar(ch);*/
	/*int i = 0;
	char arr[] = "I Am Student";
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		i++;
	}
	printf("%s\n", arr);*/

	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[5] = { 0 };
	My_memmove(arr1, arr1+2, 20);
	return 0;
	

}