#include <stdio.h>
#include <stdlib.h>

int man(){
    char* name[20];
    int* age;
    printf("NOM :");
    fgets(name, 20 , stdin);
    printf("ÂGE :");
    scanf("%d", &age);
    

    return 0;
}