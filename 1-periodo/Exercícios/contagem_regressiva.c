#include <stdio.h>
 
int main() {
    int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
        
        for (int i = 0; i < 100000000; i++) {
        }
    }
 
    printf("Fogos de artifício!\n");
   
    return 0;
}