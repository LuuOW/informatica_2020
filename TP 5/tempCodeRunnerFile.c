#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: \n");
    scanf("%i", &age);
    return(0);

switch (age) {
    
    case 1: printf("You are 1 yo\n\a");
    break;
    
    case 2: printf("You are 2 yo\n");
    break;
    default: printf("You are none\n");
    break;
    }
}
