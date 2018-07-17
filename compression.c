#include"header.h"
#include"prototype.h"
int compression()
{	
	fp3=filename;
	fp4=openfile;
	fp5=readfile;
	fpma=masterarray;
	fp9=codelenth;
	fp10=compression2;
	fp11=compression3;
	fp12=compression4;
	fp13=compression5;
	fp14=compression6;
	fp15=compression7;
	int fd1,sl,cl;
	char *fn,*a,*ma;
	fn=(char *)malloc(5);
	fn= (*fp3)();
	fd1=(*fp4)(fn);
	a=(*fp5)(fd1);
	printf("fd1:=%d\n",fd1);
	printf("data of file:=%s\n",a);
	ma=(*fpma)(fd1);
	printf("master array:=%s\n",ma);
	sl=strlen(ma);
	cl=(*fp9)(sl);
	printf("codelenthl:=%d\n",cl);
	if(cl==2)
		(*fp10)(fd1,ma);
	else if(cl==3)
		(*fp11)(fd1,ma);
	else if(cl==4)
		(*fp12)(fd1,ma);
	else if(cl==5)
		(*fp13)(fd1,ma);
	else if(cl==6)
		(*fp14)(fd1,ma);
	else if(cl==7)
		(*fp15)(fd1,ma);
	return 0;
}
