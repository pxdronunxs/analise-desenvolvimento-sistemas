// #include <stdio.h>

// int main(void) {
//     int i = 1;
//     while (i <= 10) {
//         int j = 1;
//         while (j <= 10) {
//             printf("%d\t", i * j);
//             j++;
//     }
//     printf("\n");
//     i++;
// }
//     return 0;
// }

//======================for===========================//

// #include <stdio.h>
 
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         for (int j = 1; j <= 10; j++) {
//             printf("%d\t", i * j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//======================do-while===========================//

#include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}