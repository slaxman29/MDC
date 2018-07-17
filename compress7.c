#include"header.h"

int compress7(int fd,char *ma)
{
	printf("%s: begins\n",__func__);
	int (*openfileptr)(char *);
	openfileptr=openfile;
	int (*findindexptr)(char,char *);
	findindexptr=findindex;
	unsigned char ch,chd,byt,c,byt1;
	int cfd,efd,i;
	printf("%s: begins\n",__func__);
	printf("\t%s::Give the name for compress file\n",__func__);
	cfd=openfileptr("O_WRONLY");
	printf("%s:compressed file opened successfully\n",__func__);

	printf("\n\t%s::Give the name for encrypted file\n",__func__);
	efd=openfileptr("O_WRONLY");
	printf("%s:encrypted file opened successfully\n",__func__);

	while(1)
	{
		byt ^= byt;
		c ^= c;
		read(fd,&ch,1);
		if(ch==10)
		{
			c=0x7F;
			c <<=1;
			byt |=c;
			write(cfd,&byt,1);
			if(cfd==-1)
			{
				perror("write");
				exit(EXIT_FAILURE);
				close(cfd);
			}
			break;
		}
		i=findindexptr(ch,ma);
		printf("\t\t%d\n",i);
		printf("\t\t%c\n",ch);
		c=(char)i;
		c <<=1;
		byt |=c;

		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=7;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=2;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=7;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=2;
                byt |=c;

		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=6;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=3;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=6;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=3;
                byt |=c;

		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=5;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=4;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=5;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=4;
                byt |=c;

		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=4;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=5;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=4;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=5;
                byt |=c;

		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=3;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=6;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=3;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=6;
                byt |=c;


		read(fd,&ch,1);
                if(ch==10)
                {
                        c=0x7F;
                        c <<=1;
                        c >>=2;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        byt ^= byt;
                        c ^= c;
                        c=0x7F;
                        c <<=7;
                        byt |=c;
                        write(cfd,&byt,1);
                        if(cfd==-1)
                        {
                                perror("write");
                                exit(EXIT_FAILURE);
                                close(cfd);
                        }
                        break;
                }
                i=findindexptr(ch,ma);
                printf("\t\t%d\n",i);
                printf("\t\t%c\n",ch);
		c=(char)i;
                chd=c;
                c <<=1;
                c >>=2;
                byt |=c;
                write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
                byt ^= byt;
                c=chd;
                c <<=7;
                byt |=c;

		read(fd,&ch,1);
		if(ch==10)
		{
			c=0x7F;
			c <<=1;
			c >>=1;
			byt |=c;
			write(cfd,&byt,1);
			if(cfd==-1)
			{
				perror("write");
				exit(EXIT_FAILURE);
				close(cfd);
			}
			break;
		}
		i=findindexptr(ch,ma);
		printf("\t\t%d\n",i);
		printf("\t\t%c\n",ch);
		c=(char)i;
		c <<=1;
		c >>=1;
		byt |=c;
		write(cfd,&byt,1);
                if(cfd==-1)
                {
                        perror("write");
                        exit(EXIT_FAILURE);
                        close(cfd);
                }
        }
        write(efd,ma,strlen(ma));
        close(cfd);
        close(efd);
	printf("%s: ends\n",__func__);
	}
