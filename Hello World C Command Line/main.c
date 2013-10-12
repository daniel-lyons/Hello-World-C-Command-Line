//
//  main.c
//  Hello World C Command Line
//
//  Created by Daniel Lyons on 10/12/13.
//  Copyright (c) 2013 Daniel Lyons. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    char message[40]= "this is crazy\0";
    
    printf("Hello, World!?! %s\n", message);
    return 0;
}

