#include "day2.h"

//1. Sum of Digits
int sum_of_digits(int number){
    int sum = 0, digit;
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

//2.Reverse a Number
int reverse_number(int number) {
    int reversed = 0, digit;
    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return reversed;
}

//3.Occurences of digit
int count_digit_occurrences(int number, int search) {
    int count = 0, digit;
    while (number != 0) {
        digit = number % 10;
        if (digit == search) {
            count++;
        }
        number /= 10;
    }
    return count;
}

//4.Palindrome

int is_palindrome(int number) {
    int original = number, reversed = 0, digit;
    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number /= 10;
    }
    return original == reversed;
}

//5.Prime Numbers upto N
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}
void generate_primes(int N) {
    int count = 0, number = 2;
    while (count < N) {
        if (is_prime(number)) {
            printf("%d ", number);
            count++;
        }
        number++;
    }
    printf("\n");
}

//6.sum upto 1+11+111+...
int series_sum(int n) {
    int term = 1, sum = 0;
    for (int i = 1; i <= n; i++) {
        printf("%d ", term);
        sum += term;
        term = term * 10 + 1;
    }
    printf("\n");
    return sum;
}

//7.Armstrong Number
void armstrong_number(int number){
    int temp=number;
    int sum=0;
    while(number!=0){
        int last=number%10;
        sum=sum+(last*last*last);
        number=number/10;
    }
    if(sum==temp){
       printf("%d is an armstrong number",temp);
    }else{
        printf("%d is not an armstrong Number!!",temp);
    }

}

//8.Amicable Numbers   (addition of divisors is equal to other number)

void is_num_amicable(int num1,int num2){
    int sum=0,sum1=0;
    for(int i=1;i<num1;i++){
        if(num1%i==0){
            sum=sum+i;
        }
    }
    for(int i=1;i<num2;i++){
        if(num2%i==0){
            sum1=sum1+i;
        }
    }
    if(num1==sum1 && num2==sum){
        printf("Input pair is amicable");
    }else{
        printf("Input pair is not amicable");
    }
}
//9.Menu driven sum,prod,difference

void sum(int a, int b) {
    printf("Sum: %d\n", a + b);
}

void difference(int a, int b) {
    printf("Difference: %d\n", a - b);
}

void product(int a, int b) {
    printf("Product: %d\n", a * b);
}

//11.Electricity bill calculation
int calculate_charge(int units) {
    int charge = 0;

    if (units <= 200) {
        charge = units * 5;
    } else if (units <= 300) {
        charge = (200 * 5) + ((units - 200) * 7);
    } else {
        charge = (200 * 5) + (100 * 7) + ((units - 300) * 10);
    }

    return charge;
}


