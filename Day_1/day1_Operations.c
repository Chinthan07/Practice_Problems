#include "day1.h"

//1. Uppercase to Lowercase
void toLowerCase(char *str) {
    while (*str) {
        if (*str >= 'A' && *str <= 'Z') {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

//2.Area of Circle
float area_circle(float radius){
        return  PI * radius * radius;
}

//3.  Difference between the characters
void diff(char char1,char char2){
     int count = (char2 > char1) ? char2 - char1 - 1 : char1 - char2 - 1;
     printf("Number of characters between %c and %c: %d\n", char1, char2, count);
}

//5. Number is even or odd

void even_odd(int number){
    if (number % 2 == 0) {
        printf("%d is even\n", number);
    } else {
        printf("%d is odd\n", number);
    }
}

//6. Leap Year or not
void leap_year(year){
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
}

//7. 2^N
int power(int n){
     return (1 << n);
}

//8. Check Digit or Character

void digit_character(char input){
    if (input >= '0' && input <= '9') {
        printf("You entered a DIGIT: %c\n", input);
    } else if ((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z')) {
        printf("You entered a CHARACTER: %c\n", input);
    } else {
        printf("Invalid input\n");
    }
}

//9. 2 random numbers and find its sum
int sum_of_numbers(int number,int number1){
        return (number+number1);
}
