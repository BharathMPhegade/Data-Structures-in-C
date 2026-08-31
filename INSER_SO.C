#include<stdio.h>
#include<conio.h>
int main(){
int n,t=0,i,j,arr[10],key;
clrscr();
printf("enter the num of ele");
scanf("%d",&n);
printf("enter %d elements:",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
for(i=1;i<n;i++){
t=t+3;
key=arr[i];
t=t+3;
j=i-1;
while(j>=0 && arr[j]>key){
t=t+3;
arr[j+1]=arr[j];
j--;
t=t+3;
}
arr[j+1]=key;
t=t+2;
}
printf("\n sorted array:");
for(i=0;i<n;i++){
printf("\n %d",arr[i]);
}
printf("\n time is %d",t);
printf("\n");
getch();
return 0;
}