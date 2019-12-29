//
//  main.c
//  FirstSteps
//
//  Created by Rafael Scalzo on 29/12/19.
//  Copyright © 2019 Rafael Scalzo. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    printf("oi\n");
    
    int oi = 5;
    
    switch (oi) {
        case 1:
            printf("tem 1\n");
            break;
        case 5:
            printf("tem 5\n");
            break;
        case 6:
            printf("tem 6\n");
        default:
            break;
    }
    
    if (oi == 5) {
        printf("is equal\n");
    } else {
        printf("not equal\n");
    }
    
    int novaConst = 0;
    long grandao = 12;
    
    printf("%ld \n",grandao);
    do {
        printf("hahahaha %d \n",novaConst);
        novaConst ++;
    } while (novaConst <= 10);
    
    for(int i = 0; i <= 23; i++) {
        printf("%d",i);
    }
    printf("\n");
    return 0;
}
