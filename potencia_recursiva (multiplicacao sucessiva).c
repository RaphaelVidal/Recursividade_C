/*algoritmo recursivo para elevar um n�mero a uma 
pot�ncia inteira n�o negativa.
*/ 
 #include<stdio.h>
 #include<stdlib.h>
 
 int pot(int x,int y){
	 if(y==0){
	 	return 1;
	 }else{
	 	return(x*pot(x,y-1));
	 }
 }
 
 int main(){
 	int num1,num2;
 	
 	printf("digite base:");
 	scanf("%d",&num1);
 	printf("digite potencia:");
 	scanf("%d",&num2);
 	printf("o resultado he:%d",pot(num1,num2));
 
 }
