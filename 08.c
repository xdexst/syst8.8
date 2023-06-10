#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Test v8.8: OK.\n");
	srand(time(0));

int i,j,a[5][4];
int firstSTR[4],secondSTR[4],thirdSTR[4],fourthSTR[4],fifthSTR[4];
int firstCOL[5],secondCOL[5],thirdCOL[5],fourthCOL[5];
	
	printf("Matrix:\n");
	for(i=0;i<5;i++) {
		for(j=0;j<4;j++) {
			a[i][j]=rand()%9+1;
			if(j==3){printf("%d\n",a[i][j]);}
			else {printf("%d, ",a[i][j]);}
		}
	}
	
	printf("\nFisrt group of arrays:\n");
	for(i=0;i<5;i++) {
		printf("%d array:\n",i);
		for(j=0;j<4;j++) {
			if(i==0) {
				firstSTR[j]=a[i][j];
				if(j==3){printf("%d\n",firstSTR[j]);}
				else {printf("%d, ",firstSTR[j]);}
			}
			if(i==1) {
				secondSTR[j]=a[i][j];
				if(j==3){printf("%d\n",secondSTR[j]);}
				else {printf("%d, ",secondSTR[j]);}
			}
			if(i==2) {
				thirdSTR[j]=a[i][j];
				if(j==3){printf("%d\n",thirdSTR[j]);}
				else {printf("%d, ",thirdSTR[j]);}
			}
			if(i==3) {
				fourthSTR[j]=a[i][j];
				if(j==3){printf("%d\n",fourthSTR[j]);}
				else {printf("%d, ",fourthSTR[j]);}
			}
			if(i==4) {
				fifthSTR[j]=a[i][j];
				if(j==3){printf("%d\n",fifthSTR[j]);}
				else {printf("%d, ",fifthSTR[j]);}
			}
		}
	}
	
	printf("\nSecond group of arrays:\n");
	for(i=0;i<4;i++) {
		printf("%d array:\n",i);
		for(j=0;j<5;j++) {
			if(i==0) {
				firstCOL[j]=a[j][i];
				if(j==4){printf("%d\n",firstCOL[j]);}
				else {printf("%d, ",firstCOL[j]);}
			}
			if(i==1) {
				secondCOL[j]=a[j][i];
				if(j==4){printf("%d\n",secondCOL[j]);}
				else {printf("%d, ",secondCOL[j]);}
			}
			if(i==2) {
				thirdCOL[j]=a[j][i];
				if(j==4){printf("%d\n",thirdCOL[j]);}
				else {printf("%d, ",thirdCOL[j]);}
			}
			if(i==3) {
				fourthCOL[j]=a[j][i];
				if(j==4){printf("%d\n",fourthCOL[j]);}
				else {printf("%d, ",fourthCOL[j]);}
			}
		}
	}
	
	return 0;
}
