#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],i,j,n,gap,key;
	clrscr();
	printf("Enter the Size:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		//a[i]=rand();
		scanf("%d",&a[i]);
	}
	printf("\nArray Element Before Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}

	//shell sort
	for(gap = n/2;gap>0;gap=gap/2){
		for(i=gap;i<n;i++){
			key = a[i];
			for(j = i;j>=gap && a[j-gap]>key;j = j-gap){
				a[j] = a[j-gap];
			}
			a[j]= key;

		}

	}


	printf("\nArray Element after Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	getch();
	return 0;

}