#include </Users/deirdrebarg/Documents/Developer/libcs50-11.0.2/src/cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Defining variables
    string operation;   
    string validMessage = "This is a Valid operation\n"; 
    bool doesNeedPrompt = true ;

    // Intro message
    printf("Welcome to my first Calculator. You can use + , - , x , / , sq = square root , ex = exponent\n ");

    // Getting a valid opperation
    while (doesNeedPrompt) {
        operation = get_string("What Operation: ");
        if (strcmp("+", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false;
        }
        else if (strcmp("-", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false;
        }
        else if (strcmp("x", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false;
        }
        else if (strcmp("/", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false;
        }
        else if (strcmp("sq", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false; 
        }
        else if (strcmp("ex", operation) == 0 ) {
            printf("%s", validMessage);
            doesNeedPrompt = false; 
        }
        else {
            printf("this is not a valid operation\n");
        } 
    }

    // Getting x and y values
    int x = get_int("x: ");
    int y = get_int("y: ");

    // Doing the opperation
    if (strcmp("+", operation) == 0) {
        printf("%d\n", x + y);
    }else if (strcmp("-", operation) == 0) {
        printf("%d\n", x - y);
    }else if (strcmp("/", operation) == 0) {
        printf("%d\n", x / y); 
    }else if (strcmp("x", operation) == 0) {
        printf("%d\n", x * y);
    }
  }