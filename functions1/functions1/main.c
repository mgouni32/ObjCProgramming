//
//  main.c
//  functions1
//
//  Created by Mounika on 5/4/15.
//  Copyright (c) 2015 Mounika. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>
void congratulateStudent(char *student,char *course,int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student,course,numDays);
}

int main(int argc, const char * argv[])
{
    congratulateStudent("Kate","cocoa",5);
    sleep(4);
    congratulateStudent("Bo","Objective-c",2);
    sleep(4);
    congratulateStudent("Mike","Python",2);
    sleep(4);    congratulateStudent("LIz","ios",5);
    return 0;
                        
    
    }
