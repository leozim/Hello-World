#include <stdio.h>

int main(void) {

    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= 3; j++){
            if(i <= j)
                printf("*");
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}