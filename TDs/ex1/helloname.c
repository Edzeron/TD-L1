#include <stdio.h>
#include <stdlib.h>

int main(){
    char* name;
    printf("What's your name ?\n ");
    scanf("%ms", &name);
    printf("Hello %s\n", name);
    free(name);
    
}

/*
La fonction free() permet de désallouer la mémoire d'une variable précédemment alloué par un pointeur. Lorsque l'on entre notre nom grâce à
scanf(), on alloue une adresse dans la mémoire à la variable "name". La fonction free() libère la valeur "name" de l'entrée que l'on a mise.
Or, comme on n'utilise plus la variable "name" par la suite, le fait de retirer la fonction free() ne change rien au programme
*/