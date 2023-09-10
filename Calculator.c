#include "../libcs50-11.0.2/src/cs50.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

// //Square Root Function
// double calcSqrt(double num) {
//   if (num < 0) return -1; // Negative numbers don't have real square roots
//   if (num == 0 || num == 1) return num;
  
//   double tolerance = 1e-10;
//   double guess = num;
//   double difference = guess;
  
//   while (difference > tolerance) {
//     double new_guess = 0.5 * (guess + num / guess);
//     difference = fabs(new_guess - guess);
//     guess = new_guess;
//   }
  
//   return guess;
// }


//     // Getting x and y values
//     int x = get_int("x: ");
//     int y = get_int("y: ");


// // Gets valid opperation from user
// bool getValidOperation(string userOperation) {

//     string operation;
//     bool doesNeedPrompt = true ;    
//     string validMessage = "This is a Valid operation\n"; 

//     // Getting a valid opperation
//     while (doesNeedPrompt) {
//         operation = get_string("What Operation: ");
//         if (strcmp("+", operation) == 0 ) {
//             doesNeedPrompt = false;
//         }
//         else if (strcmp("-", operation) == 0 ) {
//             doesNeedPrompt = false;
//         }
//         else if (strcmp("x", operation) == 0 ) {
//             doesNeedPrompt = false;
//         }
//         else if (strcmp("/", operation) == 0) {
//             doesNeedPrompt = false;
//         }
//         else if (strcmp("sq", operation) == 0 ) {
//             printf("%s", validMessage);
//             doesNeedPrompt = false; 
//         }
//         else if (strcmp("ex", operation) == 0 ) {
//             printf("%s", validMessage);
//             doesNeedPrompt = false; 
//         }
//         else {
//             printf("this is not a valid operation\n");
//         } 
//     }

//     return operation;
// }

// void performOperation(string operation, int x, int y) {    
//     // Doing the opperation
//     if (strcmp("+", operation) == 0) {
//         printf("%d\n", x + y);
//     }else if (strcmp("-", operation) == 0) {
//         printf("%d\n", x - y);
//     }else if (strcmp("/", operation) == 0) {
//         printf("%d\n", x / y); 
//     }else if (strcmp("x", operation) == 0) {
//         printf("%d\n", x * y);
//     }
// }



// Get valid operation called userOperation from user
string getValidOperation() {
    bool needOperation = true;
    while (needOperation) {
        string userOperation = get_string("What Opperation?\n");
        if (strcmp(userOperation, "+") == 0) {
            needOperation = false;
            return userOperation;
        } else if (strcmp(userOperation, "-") == 0) {
            needOperation = false;
            return userOperation;
        } else if (strcmp(userOperation, "x") == 0) {
            needOperation = false;
            return userOperation;
        } else if (strcmp(userOperation, "/") == 0) {
            needOperation = false;
            return userOperation;
        }  else if (strcmp(userOperation, "sq") == 0) {
            needOperation = false;
            return userOperation;
        }  else if (strcmp(userOperation, "ex") == 0) {
            needOperation = false;
            return userOperation;
        } else {
            printf("Not supported operation,try again\n");
            needOperation = true;
        }
    }
    printf("Something went wrong, sorry");
    return "";
}

// Get valid x from user
int getX() {
    return get_int("x: ");
}

// Get valid y from user
int getY() {
    return get_int("y: ");
}

// Perform operation
// int x: Operand
// int y: Operand
// string userOperation: Operator
// int return: Result of the operation
//TODO: Inmclude Square root and Exponents Operations 
int performOperation(string userOperation, int x, int y) {    
    if (strcmp(userOperation, "+") == 0) {
        return x + y;
    } else if (strcmp(userOperation, "-") == 0) {
        return x - y;
    } else if (strcmp(userOperation, "x") == 0) {
        return x * y;
    } else if (strcmp(userOperation, "/") == 0) {
        return x / y;
    } else {
        printf("Does not support");
        return 0;
    }
}

// Asks user to play again
// bool return: Represents if we are going to play again
bool askToPlayAgain() {    
    return false; 
}

int main(void)
{
    bool doesWantToPlay = true;

    while (doesWantToPlay)
    {
        // Intro message
        printf("Welcome to my first Calculator. You can use + , - , x , / , sq = square root , ex = exponent\n");

        // Determines if user operation is valid
        string userOperation = getValidOperation();

        // Get valid user input
        int x = getX();
        int y = 0;
        // if userOperation is not square root then ask for y
        bool isSquareRoot = strcmp(userOperation, "sq") == 0;
        bool shouldAskForY = !isSquareRoot;
        if (shouldAskForY)        
        {
            int y = getY();
        }
        
        

        int answer = performOperation(userOperation, x, y);
        printf("answer is %d\n", answer);


        doesWantToPlay = askToPlayAgain();
    }    
}