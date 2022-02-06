#include<stdio.h> 
int main()
{
	int price=0;
	printf("请输入金额（元）\n") ;
	scanf ("%d",&price) ;
	
	int change=500-price;
	
	printf("找你%d元\n",change) ;

	return 0;
}
