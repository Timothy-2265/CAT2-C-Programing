/*Name:Timothy Kahuki
Reg no:CT101/G/26459/25
Date:6/11/2025
Description:Two D array
*/

#include <stdio.h>

int main() {
    int scores[2][2] = {
        {65, 84},
        {92, 72}
    };

    int i, j;
    printf("Elements of the 2D array are:\n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}