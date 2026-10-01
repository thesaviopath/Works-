#include <stdio.h>

double hare=0,lynx=0;
int months,eaten=0;

int hares();
int lynxes();

int main(){

	printf("---Ecological Simulator---\n");
	printf("Enter starting Hare population: ");
	scanf("%lf",&hare);
	printf("Enter starting Lynx population:");
	scanf("%lf",&lynx);
	printf("Enter months to simulate: ");
	scanf("%d",&months);
	printf("Simulating...\n");
	for (int i=1; i<=months; i++){
		hares();
		lynxes();
		printf("Month %d : %.2lf Hares | %.2lf Lynx \n",i,hare,lynx);
	}
	printf("===Simulation Complete===\n");
	printf("Total Hares eaten : %d\n",eaten);
	
}

int hares(){
	hare=hare*1.5;
	hare-=2*lynx;
	eaten+=2*lynx;
	if (hare <=0) hare=0;
	return 0;
}

int lynxes(){
	lynx=lynx*0.8;
	lynx+=0.05*hare;
	if(lynx<=0) lynx=0;
	return 0;
}
