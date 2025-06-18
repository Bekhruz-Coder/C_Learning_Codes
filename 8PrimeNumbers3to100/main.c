#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void){
    
    int p = 0;
    int i = 0;
    
    int primes[50] = {2, 3};
    int primeIndex = 2;
    
    bool isPrime = false;
    
    for(p = 5; p <= 100; p = p + 2){
        isPrime = true;
        for(i = 1; isPrime && p / primes[i] >= primes[i]; i++){
            if(p % primes[i] == 0){
                isPrime = false;
            }
        }
        
        if(isPrime == true){
            primes[primeIndex] = p;
            primeIndex++;
        }
    }
    
    for(i = 0; i < primeIndex; i++){
        printf("%d  ", primes[i]);
    }
    
    printf("\n");
    
    return 0;
}