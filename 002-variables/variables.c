#include <stdio.h>

int main() {
    // Variable = Allocated place in memory to store a value

    int x; // Declaration
    x = 1; // Initialization

    int y = 321; // Declaration + Initialization

    int age = 25; // Integer
    float temperature = 32.5; // Floating point number
    char grade = 'A'; // Single character
    char name[] = "Vincent"; // Array of characters

    printf("Hello %s \n", name); 
    printf("You are %d years old \n", age);
    printf("Your average grade is: %c \n", grade);
    printf("The current temperature is: %f Degrees \n", temperature);

}