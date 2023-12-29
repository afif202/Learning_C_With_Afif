#include <stdio.h>
int main(){
     for(int i=0;i<5;i++){
	for(int j=1;j<=5;j++){
		if(j<=i)
			printf(" ");
	               else
			printf("x");
		}
		printf("\n");
	}
	return(0);
}
