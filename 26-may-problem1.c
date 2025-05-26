: Given an integer N, print the following pattern
Input Format: N = 3
Result: 
3 3 3 3 3 
3 2 2 2 3 
3 2 1 2 3 
3 2 2 2 3 
3 3 3 3 3

  CODE FOR THIS PROBLEM IN C IS AS FOLLOWING

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int minimum(int a, int b) {
    return (a < b) ? a : b;
}
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i <= 2*n-2; i++) {
        for (int j = 0; j <= 2*n-2; j++) {
           int top = i;
           int left = j;
           int right = (2*n-2) - j;
           int down = (2*n-2) - i;
           printf("%d ", (n - minimum(minimum(top, down), minimum(left, right))));
        }
        printf("\n");
    }
    return 0;
}
