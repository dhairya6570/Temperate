#include<stdio.h>

int main (){
	
	int a , n , factorial=1 ;
	
	printf("Enter a number to find it's factorial : ");
	scanf("%d",&n);
	
	for(a=1 ; a<=n ; a++ ){
		
		factorial = factorial * a ;
		
	}
	
	printf("%d",factorial);
	
	return 0 ;
}
