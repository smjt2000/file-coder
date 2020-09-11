#include<stdio.h>

#define MAX_FILE_SIZE (1024*1024)
int main(int argc,char *argv[2],int argd[])
{
	FILE *fileptr;
	char data[MAX_FILE_SIZE];
	fileptr=fopen(argv[1],"rb");
	int i=0;
	while(!feof(fileptr))
		data[i++]=fgetc(fileptr);
	fclose(fileptr);
	
	if(argc==2)
	{
		fileptr=fopen(argv[2],"wb");
	
		for(int j=0;j<i-1;j++)
			fputc((data[j]^0x60),fileptr);
	}
	else if(argc>3)
	{
		fileptr=fopen(argv[2],"wb");
		for(int j=0;j<i-1;j++)
			fputc((data[j]^argd[0]),fileptr);
	}
	fclose(fileptr);
	return 0;
}
