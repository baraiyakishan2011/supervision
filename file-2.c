#include<stdio.h>

main()
{
	int *p;
	char data[1000];
	p = fopen("file-2.txt","a");
	
	if(p==0)
	{
		printf("file not open");
		
	}
	else
	{
		printf("Enter your string = ");
		gets(data);
		fputs("\n",p);
	    fputs(data,p);
		printf("data add successfull.......");
	}
	fclose(p);
	
	printf("\n--------data read ---------");
	p = fopen("file-2.txt","r");
	
	if(p==0)
	{
		printf("file not open");	
	}
	else
	{
		while(fgets(data,5,p)!=NULL)
		{
			printf("%s",data);
			
		}
	}
	fclose(p);
	
}
