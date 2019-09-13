//
//  timeLab.c
//  portfolio
//
//  Created by Gheibi, Ermia on 9/13/19.
//  Copyright © 2019 Gheibi, Ermia. All rights reserved.
//

#include "timeLab.h"
#include <stdio.h>
int minutes(void) {
    int sec, h, m, s;
    printf("Input seconds: ");
    scanf("%d", &sec);
    
    h = (sec/3600);
    
    m = (sec -(3600*h))/60;
    
    s = (sec -(3600*h)-(m*60));
    
    printf("Hours: %d\nMinutes: %d\nSeconds: %d\n",h,m,s);
    
    return 0;
}
