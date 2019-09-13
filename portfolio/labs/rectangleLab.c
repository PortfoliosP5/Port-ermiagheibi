//
//  rectangleLab.c
//  portfolio
//
//  Created by Gheibi, Ermia on 9/13/19.
//  Copyright © 2019 Gheibi, Ermia. All rights reserved.
//

#include <stdio.h>
#include <math.h>

#include <stdio.h>

int rectangle(void)
{
    float perimeter;
    float l,b,area;
    
    printf("Enter the value of length:\n");
    scanf("%f",&l);
    
    printf("Enter the value of width:\n");
    scanf("%f",&b);
    
    area=l*b;
    perimeter=((2*l)+(2*b));
    
    printf("Area of width: %f\n",area);
    printf("Perimeter of rectangle is: %f\n", perimeter);
    return 0;
}
