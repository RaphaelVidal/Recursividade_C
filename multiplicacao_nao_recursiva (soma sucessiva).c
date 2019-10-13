/* multiplicar dois números(através da soma sucessiva);*/
 //forma iterativa de soma

 #include<stdio.h>
 #include<stdlib.h>
 
 int soma(int x,int y){
 	int result=0;
 	for(int i=y;i>0;i--){
 		result+=x;
	 }
	 return result;
 }
 int main(){
 	int num1,num2;
 	printf("digite num1:");
 	scanf("%d",&num1);
 	printf("digite num2:");
 	scanf("%d",&num2);
 	printf("o resultado he:%d",soma(num1,num2));	
 }
