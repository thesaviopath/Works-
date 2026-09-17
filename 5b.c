#include <stdio.h>

/* int ThermalTest(int,int);
int KineticTest(int,int);

int main(){
	int choice,dur,cycles;
	do {
	printf("Enter Component Type(1=Valve, 2=Hull, 0=Exit):  ");
	scanf("%d",&choice);
	if(choice==0) break;
	printf("Enter Base Durability: ");
	scanf("%d",&dur);
	printf("Enter Test Cycles: ");
	scanf("%d",&cycles);
	switch (choice){
		case 1:{
			ThermalTest(dur,cycles);
			break;}
		case 2: {
			KineticTest(dur,cycles);
			break;}
			}
	}
	while(choice!=0);
}

int ThermalTest(int dur, int cycles){
	printf("Processing Thermal Test....\n");
	for(int i=1; i<=cycles; i++){
		if(dur<20){
			printf("[FAIL] Engine Valve Melted Down! In Test Cycle:%d\n",i);
			return 0;}
		int x=dur%10;
		dur=dur-(5+x);
	}
	printf("[PASS] Engine Valve Survived! Final Durability: %d \n",dur);
	return 0;
}

int KineticTest(int dur, int cycles){
	printf("Processing Kinetic Test....\n");
	for(int i=1; i<=cycles; i++){
		if (dur<30){
			printf("[FAIL] Hull Plate Shattered! In test Cycle: %d\n",i);
			return 0;}
		else if( dur%2==0){
			dur=dur/2;}
		else dur=dur-15;
			}
	printf("[PASS] Hull Plate survived! Final Durability: %d\n",dur);
	return 0;
} */

//Q3: Mars Rover
#include <math.h>
#include <stdlib.h>

int xcurr=0,ycurr=0,xtar,ytar;
double battery=100.00,tdist=0;
int storage=0;

int drive(int,int);
int recharge();
int absSum(int);
int isPrime(int);

int main(){
	
	int choice;
	do{
		printf("\n---Mars Rover OS---\n");
		printf("Battery: %.2lf | Storage: %d/50 | Position: (%d,%d)\n",battery,storage,xcurr,ycurr);
		printf("[1] Drive & Drill [2] Recharge [3] Transmit & Sleep\n");
		printf("Select an Option: ");
		scanf("%d",&choice);
		printf("\n");
		switch (choice){
			case 1:{
				printf("Enter Target X and Y: ");
				scanf("%d %d",&xtar,&ytar);
				drive(xtar,ytar);
				break;}
			case 2:{
				recharge();
				break;}
			case 3:{
				printf("Initiating Sleep Mode...\n");
				printf("===FINAL MISSION REPORT===\n");
				printf("Total Distance Driven: %.2lf km \n",tdist);
				printf("Total Samples Stored: %d\n",storage);
				choice=0;
				break;
				}
		}
	}
	while (choice!=0);
}

int drive(int x,int y){
	int X=xcurr-x,Y=ycurr-y;
	double dist=sqrt(X*X+Y*Y);
	printf("Calculating Route...\n");
	printf("Distance: %.2lf | Battery Cost: %.2lf \n",dist,dist*2.5);
	if(battery<dist*2.5){
		printf("Insufficient Battery! Action Denied. Please recharge.\n");
		return 0;}
	battery-=dist*2.5;
	xcurr=x;
	ycurr=y;
	tdist+=dist;
	printf("Arrived at (%d,%d). Commencing Drill...\n",x,y);
	int sum = absSum(x)+ absSum(y);
	int collect;
	if (isPrime(sum)){
		printf("Geological Score: %d(Prime).Rich deposit! Collected 15 samples!\n",sum);
		if (storage+15>50){
			printf("Storage Exceeded! Leaving the rest\n");
			storage=50;
			return 0;}
		storage+=15;}
	else{
		printf("Geological Score: %d (Not Prime).Collected %d Samples!\n",sum,sum);
		if (storage+sum>50){
			printf("Storage Exceeded! Leaving the rest\n");
			storage=50;
			return 0;}
		storage+=sum;}
	return 0;
}

int recharge(){
	printf("Solar panels deployed. Battery fully recharged to 100.00.\n");
	battery=100.00;
}

int absSum(int x){
	int sum=0;
	x=abs(x);
	while (x>0){
		sum+=x%10;
		x/=10;
	}
	return sum;
}

int isPrime(int x){
	int prime;
	for(int i=2; i<x; i++){
		if(x%i==0){
			return 0;}
		}
	return 1;
}




























