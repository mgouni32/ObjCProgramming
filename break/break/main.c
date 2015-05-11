//
//  main.c
//  break
//
//  Created by Mounika on 5/6/15.
//  Copyright (c) 2015 Mounika. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for(i=0; i<14; i++)
    {
        printf("checking i = %d\n",i);
        if(i+90==i*i)
        {break;
        }
    }

        printf("The solution is %d\n",i);
    
    
        return 0;
    }
    
    
        
    
    
   

