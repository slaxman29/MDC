#include"header.h"
#include"declaration.h"
int findindex(char ch,char *ma)
{
   int i, len;
//   printf("Begin of function\n",__func__);
   len = strlen(ma);
   for (i=0;i<len;i++)
{
	if (ch == *(ma+i))
		return i;
}
printf("%s End of function", __func__);
exit(EXIT_FAILURE);
   
}
