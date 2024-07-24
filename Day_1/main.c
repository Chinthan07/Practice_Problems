#include "day1.h"
/*
//1. Uppercase to Lowercase
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    toLowerCase(str);
    printf("Lowercase: %s\n", str);
    return 0;
}
*/

//2.Area of Circle
/*
float area_circle(float radius){
        return  PI * radius * radius;
}
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area=area_circle(radius);
    printf("Area of the circle: %.2f\n",area);
    return 0;
}
*/

//3.  Difference between the characters

/*
int main() {
    char char1, char2;
    printf("Enter two characters: ");
    scanf(" %c %c", &char1, &char2);
    diff(char1,char2);
    return 0;
}
*/

//4.Celcius to Farenheit
/*
float convert(float celsius){
    return ((celsius * 9/5) + 32);
}
int main() {
    float celsius, ans;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    ans=convert(celsius);
    printf("Temperature in Fahrenheit: %.2f\n", ans);
    return 0;
}
*/

//5. Number is even or odd
/*
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    even_odd(number);
    return 0;
}
*/

//6. Leap Year or not
/*
int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    leap_year(year);
    return 0;
}
*/

//7. 2^N
/*
int main() {
    int n;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("2^%d is %d\n", n, power(n));
    return 0;
}
*/

//8. Check Digit or Character
/*
int main() {
    char input;
    printf("Enter a character or digit : ");
    scanf(" %c", &input);
    digit_character(input);
    return 0;
}
*/

//9. 2 random numbers and find its sum
/*
int main(){
    int number=0,number1=0;
    number=rand()%100;
    number1=rand()%100;
    printf("Random Numbers:%d %d\n",number,number1);
    printf("Result: %d",sum_of_numbers(number,number1));
    return 0;
}
*/
