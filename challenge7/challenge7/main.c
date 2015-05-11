//
//  main.c
//  challenge7
//
//  Created by Mounika on 5/8/15.
//  Copyright (c) 2015 Mounika. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    
    for(i=99; i >= 0;i-=3) {
    
    printf(" %d",i);
    
        if(i%5==0)
    
        {
            printf(" i=%d found one\n",i);
        }
    }
    
}


