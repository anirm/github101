#include<stdio.h>
main()
{
	int i,f=1;  

	printf("Enter a Number\n");                                   
	scanf("%d",&i);

	while(i>0)                                    
	{
		f=f*i;
		i--;
	}
	printf("Factorial=%d",f);
}
