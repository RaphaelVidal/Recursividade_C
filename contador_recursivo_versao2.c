/*Receba um número positivo e mostre como o exemplo:
	Digitado: 10
	Saída: 1,2,3,4,5,6,7,8,9,10.
*/ 
 #include<stdio.h>
 #include<stdlib.h>
 
 int func(int x){
 	int a=x;
	 if(a!=x){
	 	printf(" %d ",a);
	 	return 1;
	 	
	 }else{
	 	printf(" %d ",func(x-1));
	 	
	 }
 }
 
 int main(){
 	int num1;
 	printf("digite Num:");
 	scanf("%d",&num1);
 	func(num1);
 
 }
