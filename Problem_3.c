// Check whether an integer is odd or even

#include <stdio.h>
int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Write your code here
    if(number/2 == 1)
      printf("The entered number is even");
    else
      printf("The entered number is odd");
    
   
    return 0;
}
