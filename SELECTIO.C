#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],i,j,n,temp,min;
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

	//Logic
	for(i=0;i<n;i++){
		min =i;
		for(j=i;j<n;j++){
			if(a[j]<a[min]){
				min = j;
			}
		}
		if(i!=min){
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}

	}
	printf("\nArray Element after Sorting\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	getch();
	return 0;
}