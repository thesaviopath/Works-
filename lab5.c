/*#include <stdio.h>

int power(int,int);
int evaluateTerm(int,int,int);
int evaluatePolynomial(int,int,int,int,int);

int a,b,c,d,x;

int main(){
printf("Enter a b c d seperated by space:");
scanf("%d %d %d %d",&a,&b,&c,&d);
printf("Enter x value: ");
scanf("%d",&x);
printf("Evaluating ax^3+bx^2+cx+d : ...... %d\n",evaluatePolynomial(a,b,c,d,x));
return 0;	
}

int power(int base,int exponent){
	int result=1;
	if (exponent==0) return 1;
	else if (exponent<0){
		for (int i=0; i<-exponent; i++){
			result/=base;}
		}
	else {for (int i=0; i<exponent; i++){
		result*=base;}}
	return result;
}

int evaluateTerm(int coeff,int x,int exponent){
	int result=coeff*power(x,exponent);
	return result;
	
}

int evaluatePolynomial(int a, int b , int c,int d, int x){
	return evaluateTerm(a,x,3)+ evaluateTerm(b,x,2)+ evaluateTerm(c,x,1)+d;
} */

// Goldbach's Conjecture verifier

/*#include <stdio.h>
#include <stdbool.h>

bool isPrime(int);
int Goldbach(int);

int no;

int main(){
	printf("---Goldbach's Conjecture Verifier---\n");
	printf("Enter a Number greater than 2: ");
	scanf("%d",&no);
}

bool isPrime(int n){
	bool prime=true;
	if (n<=1){prime=false;}
	else if(n<=3){prime=true;}
	else {
		for (int i=2; i<n; i++){
			if (n%i==0) prime=false;
			}
		if (prime==true) printf("%d is Prime!\n",n);}
	return prime;
}
 int Goldbach(int n){
 	if (n<2){
 		printf("Enter a number greater than 2 \n");
 		return -1;}
 	for(int i=2; i<=n/2; i++){
 		if (isPrime(i) && isPrime(n-i)){
 			printf("Goldbach's Conjecture is verified!! \n");
 			printf("%d= %d + %d\n",n,i,n-i);
 			break;}
 		}
 	return 0;
 	} */



































