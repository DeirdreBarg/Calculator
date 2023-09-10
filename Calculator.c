#include </Users/deirdrebarg/Documents/Developer/libcs50-11.0.2/src/cs50.h>
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
    // TODO: Get user input
    // TODO: Validate user input
    // TODO: Return valid operation
    return "+";
}

// Get valid x from user
int getX() {
    // TODO: Get user input
    // TODO: Validate user input
    // TODO: Return valid x
    return 1;
}

// Get valid y from user
int getY() {    
    // TODO: Get user input
    // TODO: Validate user input
    // TODO: Return valid y
    return 2;
}

// Perform operation
// int x: Operand
// int y: Operand
// string userOperation: Operator
// int return: Result of the operation
int performOperation(string userOperation, int x, int y) {
    return 3;
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
        int y = getY();

        int answer = performOperation(userOperation, x, y);
        printf("answer is %d", answer);


        doesWantToPlay = askToPlayAgain();
    }    
}