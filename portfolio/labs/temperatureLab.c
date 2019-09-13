//
//  temperatureLab.c
//  portfolio
//
//  Created by Gheibi, Ermia on 9/13/19.
//  Copyright © 2019 Gheibi, Ermia. All rights reserved.
//

#include "temperatureLab.h"
#include <stdio.h>

int temperature(void)
{
    float celsius, fahrenheit;
    
    // Input temperature in celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    
    // celsius to fahrenheit conversion formula
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
    
    return 0;
}
