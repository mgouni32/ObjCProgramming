//
//  main.c
//  chap3
//
//  Created by Mounika on 5/3/15.
//  Copyright (c) 2015 Mounika. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // declare the variable called 'weight' of type float
    float weight;
    
    // store a number in that variable
    weight=14.2;
    
    // Log it to the user
    printf("The turkey weights %f.\n", weight);
    
    // Declare another variable of typefloat
    float cookingTime;
    cookingTime=15.0+15.0*weight;
    
    
    printf("cook it for %f minutes.\n",cookingTime);
    return 0;
}
