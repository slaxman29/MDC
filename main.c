#include"header.h"
#include"prototype.h"
int main()
{
	int choice,*p;
	fp1=mainmenu;
	fp2=compression;
	fp16=decompression;
	arr_of_func_ptr[0] = *fp2;
	arr_of_func_ptr[1] = *fp16;
	p=&choice;
	while(1)
	{
		p= (*fp1)();
		if( *p == 0 )
			goto OUT;

		else if( *p < 0 || *p > 2 )
			printf("you enterd wrong choice plz try again\n");

		else
			(*arr_of_func_ptr[*p-1])();

	}
OUT:
return 0;
}

