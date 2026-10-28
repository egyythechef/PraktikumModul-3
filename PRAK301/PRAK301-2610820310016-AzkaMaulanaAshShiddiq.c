#include <stdio.h>

int main() {
    int a, b, c, tukar;
    scanf("%d %d %d", &a, &b, &c);

    if(a > b){
        tukar = a;
        a = b;
        b = tukar; 
    }
    if(b > c){
        tukar = b;
        b = c;
        c = tukar;
    }
    if(a > b){
        tukar = a;
        a = b;
        b = tukar; 
    }
    printf("%d %d %d", a, b, c);
    return 0;
}