//
//  main.c
//  challenge4
//
//  Created by Mounika on 5/4/15.
//  Copyright (c) 2015 Mounika. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i,j,k;
    i=20;
    j=25;
    k=(i>j)?10:5;
    if(5<j-k)
    {//The first Expression
        printf("The First Expression is true");
    }else if(j>i)
        {//second Expression
        printf("The second Expression is True");
        }else
        {//third Expression
            printf("Neither Expression is True");
        }

    return 0;
}
