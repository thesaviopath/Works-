#include <stdio.h>

int Arithmetic();
int main(){
	int choice;
	do {
		printf("--- MAIN MENU---\n");
		printf("1. Basic Arithmetic \n");
		printf("2. Trigonometry\n");
		printf("3.Exponentials\n");
		printf("4.Exit\n");
		printf("Enter Choice: ");
		scanf("%d",&choice);
		
		if (choice<1|| choice>4){
			printf("Invalid Input! TRY AGAIN! \n");
			 continue;}
		
		switch (choice){
			case 1:
				{Arithmetic();
				break;}
			/*case 2:
				{Trigonometry();
				break;}
			case 3:
				{Exp();
				break;} */
			case 4:
				break;} }
	while (choice!=4);	
}

int Arithmetic(){
	int option;
	do {
		printf("---ARITHMETIC MENU---\n1. Addition (a + b) \n 2. Subtraction (a − b)\n 3. Multiplication (a × b) \n 4. Division (a/b)\n 5. Return to Main Menu\n");
		printf("Enter choice:");
		scanf("%d",&option);
		}
	while (option !=5);
}
