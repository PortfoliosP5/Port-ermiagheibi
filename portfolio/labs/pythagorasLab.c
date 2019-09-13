//
//  pythagorasLab.c
//  portfolio
//
//  Created by Gheibi, Ermia on 9/13/19.
//  Copyright © 2019 Gheibi, Ermia. All rights reserved.
//

#include "pythagorasLab.h"

int square (double base) { //creates a function that will find the square of the number given
    int i;
    double product = 1;
    
    for (i = 0; i < 2; i++) {
        product *= base;
    }
    
    return product;
}

int pythagoras(void) {
    
    double side1, side2; //starts and finds the values of both sides
    
    printf("Enter the side length of one leg of the triangle:\n");
    scanf("%lf", &side1);
    while (side1 <= 0) {
        printf("Invalid side length, try again:\n"); //retries if a negative number is entered
        scanf("%lf", &side1);
    }
    
    printf("Enter the side length of the other leg of the triangle:\n");
    scanf("%lf", &side2);
    while (side2 <= 0) {
        printf("Invalid side length, try again:\n"); //retries if a negative number is entered
        scanf("%lf", &side2);
    }
    
    side1 = square(side1); //uses square function to find lenght of 3rd
    side2 = square(side2);
    double side3 = sqrt(side1 + side2);
    
    printf("The hypotenuse of your triangle is: %lf\n", side3); //gives the user the answer
    
    return 0;
}
