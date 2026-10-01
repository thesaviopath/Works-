#include <stdio.h>

/* int main(){
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int array[n];
	printf("Enter 5 elements: ");
	scanf("%d %d %d %d %d",&array[0],&array[1],&array[2],&array[3],&array[4]);
	printf ("Array : ");
	for (int i=n-1; i>=0; i--){
		printf("%d ",array[i]);
	}
	printf("\n");
} */

//Bubble Sort Alternative

/*int main(){
	int n,passes=0;
	printf("Enter no of ele: ");
	scanf("%d",&n);
	int array[n];
	for (int i=0; i<n; i++){
		printf("Enter %d th element: ",i+1);
		scanf("%d",&array[i]);		
	}
	do{
		passes=0;	
		for(int i=0; i<n-1; i++){
			if(array[i]>array[i+1]){
				int temp=array[i+1];
				array[i+1]=array[i];
				array[i]=temp;
				passes+=1;
			}
	}}
	while(passes!=0);
	printf("Array: ");
	for (int i=0; i<n; i++){
		printf("%d ",array[i]);}
	printf("\n");
} */

//Q21 
int marks[101];

int main(){
	int n,mark,sum=0,passed=0,above=0,highest=0,lowest;
	printf("Enter NO of Students: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		printf("Enter Mark of %dth student: ",i+1);
		scanf("%d",&mark);
		marks[mark]++;
		sum+=mark;
		if(mark>highest){
			highest=mark;}
		if(mark>=40)passed++;
	}
	double average=(double)sum/n;
	lowest=marks[0]
	for (int i=0; i<101; i++){
		if(mark<lowest)lowest=mark;
		if((double)marks[i]>=average)above++;
	}
	printf("Average: %.2lf\n",average);
	printf("Highest: %d\n",highest);
	printf("Lowest: %d\n",lowest);
	printf("Passed: %d\n",passed);
	printf("Above Average: %d\n",above);
}


























