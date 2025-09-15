#include <stdio.h>

int main() {
    
    int a = 10;
    int b = a;
    int c = ((a + b) * (a - b));
    printf("The value of c is %d\n", c);

    int mod_x = 10;
    int mod_y = 3;
    int mod_result = mod_x % mod_y;
    printf("The modular result is %d\n", mod_result);

    int num = 10;
    float divisor = 3.0;
    float division_result = num / divisor;
    printf("The division result is %f\n", division_result);

    float float_value = 1.9999;
    int int_value = (int) float_value;
    printf("The int value is %d\n", int_value);

    int precedence = 1 + 2 * 3;
    printf("The precedence is %d\n", precedence);

    int precedence_2 = 1 + 2 + 3 * 4;
    int precedence_3 = 4 * 3 - 9 * 2;
    int precedence_4 = 2 + 3 * 4;
    int precedence_5 = 10 - 5 * 2;
    printf("The precedence_3 is %d\n", precedence_3); 
    printf("The precedence_2 is %d\n", precedence_2);

    int relation_1 = 10 == 10;
    int relation_2 = 10 != 10;
    int relation_3 = 10 > 10;
    int relation_4 = 10 < 10;
    int relation_5 = 10 >= 10;
    int relation_6 = 10 <= 10;
    printf("The relation_1 is %d\n", relation_1);
    printf("The relation_2 is %d\n", relation_2);
    printf("The relation_3 is %d\n", relation_3);
    printf("The relation_4 is %d\n", relation_4);
    printf("The relation_5 is %d\n", relation_5);
    printf("The relation_6 is %d\n", relation_6);

    int logical_1 = 4 > 3 && 5 < 6;
    int logical_2 = 4 > 3 || 5 < 6;
    int logical_3 = 4 > 3 && 5 > 6;
    int logical_4 = !(4 < 3 || 5 < 6);
    
    printf("logical_1: %d, logical_2: %d, logical_3: %d, logical_4: %d\n", 
           logical_1, logical_2, logical_3, logical_4);
    
    int inp_val;
    printf("Enter a number: ");
    scanf("%d", &inp_val);
    printf("The number is divisible by 2 : %d\n", inp_val % 2 == 0);

    return 0;
}