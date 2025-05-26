: Given an integer N, print the following pattern 
Input Format: N = 3
Result: 
 A 
ABA 
ABCBA

CODE----

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int n;
	int i,j;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i=0; i<n; i++) {
  // for spaces
		for(j=0; j<n-i-1; j++) {
			printf("  ");
		}
  // for character
		char c ='A';
		int breakpoint= (2*i+1)/2;
		for(j=0; j<2*i+1; j++) {
			printf("%c ", c);
			if(j < breakpoint) {
				c++;
			} else {
				c--;
			}
		}
  // for spaces
		for(j=0; j<n-i-1; j++) {
			printf(" ");
		}

		printf("\n");
	}
	return 0;
}


OUTPUT

Enter the value of n: 5
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A
