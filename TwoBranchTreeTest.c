#include"TwoBranchTree.h"

int main()
{
	BiTNode *T = GreatTree();
	PreOrder(T);
	printf("\n");
	InOrder(T);
	printf("\n");
	PostOrder(T);
	printf("\n");
	return 0;
}