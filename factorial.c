#include <stdio.h>

int factorial2(int n){
    int result;
    if(n < 2)
      result = 1;
    else{
      result = n * factorial2(n-1);
    }
    return result;
}

int factorial(int n){
    if(n < 2)
      return 1;
    return n * factorial(n-1);
}

int main() {
    int a, res;
    scanf("%d", &a);

    // Calculate the sum of the two integers
    res = factorial(a);
    res = factorial2(a);

    // Output: Print the result
    printf("Result: %d", res);

    return 0;
}
