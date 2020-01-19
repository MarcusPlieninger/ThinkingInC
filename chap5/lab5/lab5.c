/* lab5.c: compound data types exercise 

Define an Employee structure that has members' last name,
first anme, title, and salary.

Write a program that prompts the user for an arbitrary
number of Employees, and stores them in an array of
Employee. When the user enters an empty string for the
last name, print out the list of Employees. */

#include <stdio.h>
#include <string.h>

#define MAXEMPS = 10

struct Employee {
    char last[16];
    char first[10];
    char title[16];
    int salary;
};

int main() {
    struct Employee emp[10];
    int n, i;

    for (n = 0; n < MAXEMPS; ++n) {
        printf("Please enter last name: ");
        printf("Please enter first naame: ");
        printf("Please enter title: ");
        printf("Please enter salary: ");
    }


}

