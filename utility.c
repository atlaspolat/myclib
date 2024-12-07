#include "utility.h"
#include <stdio.h>

int add(int num1, int num2){

    return num1 + num2;
}

int subtract(int a, int b){

    return a - b;
}

int multiply(int x, int y){

    return x * y;
}

// This some work done by my collegue


int divide(int dividend, int divisor){
    if(divisor == 0){
        printf("Error: Division by zero is not allowed.");
        return 0;
    }
    return dividend / divisor;
}

// This function is added by me

int remainder(int dividend, int divisor){
    if(divisor == 0){
        printf("Error: Division by zero is not allowed.");
        return 0;
    }
    return dividend % divisor;
}


// Some other work
