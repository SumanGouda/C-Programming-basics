# include<stdio.h>  // preprocessor directive

int main() {

    printf("Hello World!\n");   // The /n is used to make the line change
    int number = 10;
    char ascii = '*';
    int age = 20;
    float pi = 3.14;

    printf("The value of number is %d\n", number);  // For interger we use %d
    printf("The value of ascii is %c\n", ascii);    // For character we use %c
    printf("The value of age is %f\n", age);        // For float we use %f
/*
    This is a multiple line comment
    C programming is case sensitive
    While defining variable we can use underscore & alphabets only in variable name
*/
    int a = 10;
    int A = 20;    // They both are different variable

    // To take the input from the user we use scanf()
    int age_input;
    printf("Enter your age: ");
    scanf("%d", &age_input);
    printf("The age is %d\n", age_input);


    // Crating a small program which will take the input from the user and store them in a variable then return the sum

    int num1, num2;
    printf("Entre Your First Number: ");
    scanf("%d", &num1);
    printf("Entre Your Second Number: ");
    scanf("%d", &num2);
    int sum = num1 + num2;
    printf("The sum is %d", sum);


    return 0;
}
// in widows we use the .a/.exe which is the executable file


