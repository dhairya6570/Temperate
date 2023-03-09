#include<stdio.h>

int main (){
	
	int n , number=0 ;
	
	printf("Enter a value to find how many numbers are their : ");
	scanf("%d",&n);
	
	while(n!=0){
		
		n=n/10;
		number++ ;
		
	}
	
	printf("Numbers in your value is : %d ",number);
	
	return 0 ;
}
