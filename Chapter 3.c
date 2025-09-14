#include <stdio.h>

// Problem 1
// int main() {
//     int x, y, z;
//     float avg;
//     printf("Enter 3 numbers: ");
//     scanf(" %d %d %d", &x, &y, &z);
//
//     avg = (x + y + z) / 3;
//     printf("The average of %d %d and %d is %f", x, y, z, avg);
//     return 0;
// }

// Problem 2
// int main() {
//     char ch;
//     printf("Enter a character: ");
//     scanf(" %c", &ch);
//
//     // Check if the character is between '0' and '9'
//     if (ch >= '0' && ch <= '9') {
//         printf("%c is a digit", ch);
//     } else {
//         printf("%c is not a digit", ch);
//     }
//     return 0;
// }

// Problem 3
// int main() {
//     int i1, i2, i3;
//
//     printf("Enter 3 integers: ");
//     scanf(" %d %d %d", &i1, &i2, &i3);
//
//     if (i1 < i2 && i1 < i3){
//         printf("The smallest integer is %d\n", i1);
//     }else if(i2 < i1 && i2 < i3){
//         printf("The smallest integer is %d\n", i2);
//     }else if(i3 < i1 && i3 < i2){
//         printf("The smallest integer is %d\n", i3);
//     }
//
//     return 0;
// }

// Conditional Statements
int main() {
    int age;
    printf("Enter your age: \n");
    scanf("%d", &age);
    age >= 18 ? printf("You are eligible to vote\n") : printf("You are not eligible to vote\n");

    int day;
    printf("Enter the day (1-7): \n");
    scanf("%d", &day);

    switch (day) {
        case 1: 
            printf("Monday\n");
            break;
        case 2: 
            printf("Tuesday\n");
            break;
        case 3: 
            printf("Wednesday\n");
            break;
        case 4: 
            printf("Thursday\n");
            break;
        case 5: 
            printf("Friday\n");
            break;
        case 6: 
            printf("Saturday\n");
            break;
        case 7: 
            printf("Sunday\n");
            break;
        default: 
            printf("Invalid day\n");
            break;
    }

    return 0;
}