#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("file-1.txt","w");
	
	if(p==0)
	{
		printf("file not open");
		
	}
	else
	{
		printf("Enter your string = ");
		gets(data);
		fputs(data,p);
		printf("data add successfull.......");
	}
	fclose(p);
}
