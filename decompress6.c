#include"header.h"

int decompress6(int cfd,char *ekey)
{
	printf("%s: begins\n",__func__);
        int (*openfileptr)(char *);
        openfileptr=openfile;
        unsigned char ch,c,chd,byt;
        int dfd,i;
        printf("%s: open file for decompression\n",__func__);
        dfd=(*openfileptr)("O_WRONLY");

        while(1)
        {
                i ^=i;
                if(read(cfd,&ch,1)==0)
                        break;

                byt ^=byt;
                c=ch;
                c >>=2;
                if(c==0x3F)
                        break;
                i=(int)c;
                printf("\t\t%d\n",i);
                byt=*(ekey+i);
                write(dfd,&byt,1);

		byt ^=byt;
                chd ^=chd;
                c=ch;
                c <<=6;
                c >>=2;
                chd |=c;
                read(cfd,&ch,1);
                c=ch;
                c >>=4;
                chd |=c;
                if(chd==0x3F)
                        break;
                i=(int)chd;
                printf("\t\t%d\n",i);
                byt=*(ekey+i);
                write(dfd,&byt,1);

		byt ^=byt;
                chd ^=chd;
                c=ch;
                c <<=4;
                c >>=2;
                chd |=c;
                read(cfd,&ch,1);
                c=ch;
                c >>=6;
                chd |=c;
                if(chd==0x3F)
                        break;
                i=(int)chd;
                printf("\t\t%d\n",i);
                byt=*(ekey+i);
                write(dfd,&byt,1);
		
                byt ^=byt;
                c=ch;
                c <<=2;
                c >>=2;
                if(c==0x3F)
                        break;
                i=(int)c;
                printf("\t\t%d\n",i);
                byt=*(ekey+i);
                write(dfd,&byt,1);
	}
	printf("%s: ends\n",__func__);
}
