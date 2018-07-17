#include"header.h"
#include"prototype.h"
int* mainmenu()
{
	int choice,*p;
	p=&choice;
	printf("\t____mainmenu_____\n");
	printf("\t1: Compression\n");
	printf("\t2: Decompresson\n");
	printf("\t0: Exit\n");
	printf("Enter your choice:");
	scanf("%d",p);
	return p;
}

