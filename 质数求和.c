#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num == 2) return true;
    for (int i = 2; i < (int) sqrt((double) num) + 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


int main() {
    int p;
    scanf("%d", &p);
    int counter = 0;
    int nowPrime = 2;
    int sum = 0;
    while (counter < p + 10)
    {
       if(isPrime(nowPrime))
       {
           if(counter >= p - 1)
           {

               sum += nowPrime;
           }
          counter ++;
       }

       nowPrime ++;
    }

    printf("%d", sum);
    return 0;
}