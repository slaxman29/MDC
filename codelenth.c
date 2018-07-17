#include"header.h"
#include"prototype.h"
int codelenth(int sl)
{	
	int cl;
	if(sl < 4 )
		cl=2 ;
	else if(sl < 8 )
		cl= 3;
	else if(sl < 16 )
		cl= 4;
	else if(sl < 32 )
		cl= 5;
	else if(sl < 64 )
		cl= 6;
	else if(sl < 128 )
		cl= 7;
	return cl;
}
