#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    char oper;
    printf("Enter the operator (p for prime check, f for prime factors, d for primes before, e to exit): ");
    scanf(" %c", &oper);  // Note the space before %c
    
    switch(oper){
        case 'p': {
            int prime = 0;
            if (num <= 1) {
                prime = 1;  // Not prime
            } else {
                prime = 0;  // Assume prime initially
                for (int i = 2; i < num; i++) {
                    if (num % i == 0) {
                        prime = 1;  // Not prime
                        break;
                    }
                }
            }
            
            if (prime == 0) {
                printf("%d is a prime number\n", num);
            } else {
                printf("%d is not a prime number\n", num);
            }
            break;
        }
            
        case 'f': {
            printf("Prime factors of %d are: ", num);
            if (num <= 1) {
                printf("None (number must be greater than 1)");
            } else {
                int temp = num;
                for (int i = 2; i <= temp; i++) {
                    if (temp % i == 0) {
                        // Check if i is prime
                        int is_prime = 1;
                        for (int j = 2; j * j <= i; j++) {
                            if (i % j == 0) {
                                is_prime = 0;
                                break;
                            }
                        }
                        if (is_prime == 1) {
                            printf("%d ", i);
                            while (temp % i == 0) {
                                temp /= i;
                            }
                        }
                    }
                }
            }
            printf("\n");
            break;
        }

        case 'd': {
            printf("All the prime numbers before %d are: ", num);
            if (num <= 2) {
                printf("None (number must be greater than 2)");
            } else {
                for (int i = 2; i < num; i++) {
                    int is_prime = 1;
                    for (int j = 2; j * j <= i; j++) {
                        if (i % j == 0) {
                            is_prime = 0;
                            break;
                        }
                    }
                    if (is_prime == 1) {
                        printf("%d ", i);
                    }
                }
            }
            printf("\n");
            break;
        }

        case 'e': //exit from the program 
            printf("Exiting the program.\n");
            break;
            
        default:
            printf("Invalid operator! Use 'p', 'f', 'd', or 'e'.\n");
            break;
    }
    
    return 0;
}
