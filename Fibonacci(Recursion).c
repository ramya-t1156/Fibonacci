#include<stdio.h>

int rec(int i){
	if(i==0){
		return 0;
	}
	else if(i==1){
		return 1;
	}
	else{
		return rec(i-1)+rec(i-2);
	}
}
int main(){
	int n,i,sum=0;
	printf("Enter the number of terms : ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int num;
		num=rec(i);
		printf("%d\t",num);
		sum+=num;	
}
printf("\nSum = %d\n",sum);
return 0;
}
