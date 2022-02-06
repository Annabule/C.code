#include<stdio.h> 

int main()
{
	int amount=200;
	int price=0 ;

	 
	printf("请输入金额（元）") ;
	scanf("%d",&price) ;
	
	printf("请输入票面:");
	scanf("%d", &amount);
	
	
	
	int change1=amount-price;
	
	
	
	printf("找你%d元。\n",change1);
	
	return 0;
}
