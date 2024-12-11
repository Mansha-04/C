#include<stdio.h>
int main(){
	int a,b;
	printf("Enter no. of row and column:\n");
	scanf("%d %d",&a,&b);
	while(a<=0 || b<=0){
		printf("Enter valid no. of row and column: \n");
		scanf("%d %d",&a,&b);
	}
	int arr1[a][b];
	int arr2[b][a];
	int i,j;
	//taking user input
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}
	//transpose
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			arr2[i][j]=arr1[j][i];
		}
	}
	//print
	printf("Original array: \n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("%d\t",arr1[i][j]);
		}
		printf("\n");
	}
	printf("Transpose array: \n");
	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
			printf("%d\t",arr2[i][j]);
		}
		printf("\n");
	}
}
			
