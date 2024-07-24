#include "day2.h"

//1. Sum of Digits
/*
int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    printf("%d",sum_of_digits(number));
    return 0;
}
*/

//2.Reverse a Number
/*
int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    printf("Reversed number: %d\n", reverse_number(number));
    return 0;
}
*/

//3.Occurences of digit
/*
int main() {
    int number, search;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter the digit to count: ");
    scanf("%d", &search);
    printf("The digit %d occurs %d times in %d\n", search, count_digit_occurrences(number, search), number);
    return 0;
}
*/

//4.Palindrome
/*
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
*/

//5.Prime Numbers upto N

/*
int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);
    printf("First %d prime numbers: ", N);
    generate_primes(N);
    return 0;
}
*/

//6.sum upto 1+11+111+...
/*
int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Sum of the series: %d\n", series_sum(n));
    return 0;
}
*/

//7.Armstrong Number
/*
int main()
{
    int number;
    printf("Enter the Number: ");
    scanf("%d",&number);
    armstrong_number(number);
    return 0;
}
*/

//8.Amicable Numbers   (addition of divisors is equal to other number)
/*
int main(){
    int num1,num2;
    printf("Enter 2 Numbers: ");
    scanf("%d%d",&num1,&num2);
    is_num_amicable(num1,num2);
    return 0;
}
*/

//9.Menu driven sum,prod,difference
/*
int main() {
    int choice, num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    while (1) {
        printf("\nMenu:\n");
        printf("1. Sum\n");
        printf("2. Difference\n");
        printf("3. Product\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                sum(num1, num2);
                break;
            case 2:
                difference(num1, num2);
                break;
            case 3:
                product(num1, num2);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
*/

//10.Volume Calculation of different shapes
/*
double volume_cube(double side) {
    return side * side * side;
}

double volume_cuboid(double length, double breadth, double height) {
    return length * breadth * height;
}

double volume_sphere(double radius) {
    return (4.0/3.0) * PI * radius * radius * radius;
}

double volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}

double volume_cone(double radius, double height) {
    return (1.0/3.0) * PI * radius * radius * height;
}

int main() {
    int choice;
    double side, length, breadth, height, radius;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Cube\n");
        printf("2. Cuboid\n");
        printf("3. Sphere\n");
        printf("4. Cylinder\n");
        printf("5. Cone\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter side length of the cube: ");
                scanf("%lf", &side);
                printf("Volume of the cube: %.2lf\n", volume_cube(side));
                break;
            case 2:
                printf("Enter length, breadth, and height of the cuboid: ");
                scanf("%lf %lf %lf", &length, &breadth, &height);
                printf("Volume of the cuboid: %.2lf\n", volume_cuboid(length, breadth, height));
                break;
            case 3:
                printf("Enter radius of the sphere: ");
                scanf("%lf", &radius);
                printf("Volume of the sphere: %.2lf\n", volume_sphere(radius));
                break;
            case 4:
                printf("Enter radius and height of the cylinder: ");
                scanf("%lf %lf", &radius, &height);
                printf("Volume of the cylinder: %.2lf\n", volume_cylinder(radius, height));
                break;
            case 5:
                printf("Enter radius and height of the cone: ");
                scanf("%lf %lf", &radius, &height);
                printf("Volume of the cone: %.2lf\n", volume_cone(radius, height));
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
*/

//11.Electricity bill calculation
/*
int main() {
    int units;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    int total_charge = calculate_charge(units);
    printf("Total charge amount: Rs %d\n", total_charge);

    return 0;
}
*/




