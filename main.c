#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc > 1) printf("%s", argv[1]);
    else printf("%s", "Hello");
    return 0;
}