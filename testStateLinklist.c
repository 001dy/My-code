#include"StateLinklist.h"

int main()
{
	StateL adrr[SIZE];
	InitStateL(adrr);
	InsertStateL(adrr); 
	InsertStateL(adrr); 
	InsertStateL(adrr);
	My_printf(adrr);
	return 0;
}