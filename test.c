#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5};
	int n=sizeof(a)/sizeof(a[0]);
	printf("%d\n",n);
}
