#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>

void tomil (char *c) {
    int temp = 0;
    if (c[8] == 'A') {
        if ( c[0] == '1' && c[1] == '2') {
            c[0] = '0';
            c[1] = '0';
        }
    }

    if (c[8] == 'P') {
        if ( c[0] == '0' && c[1] == '1' ) {
          c[0] = '1';
          c[1] = '3';
        }
        if ( c[0] == '0' && c[1] == '2' ) {
          c[0] = '1';
          c[1] = '4';
        }
        if ( c[0] == '0' && c[1] == '3' ) {
          c[0] = '1';
          c[1] = '5';
        }
        if ( c[0] == '0' && c[1] == '4' ) {
          c[0] = '1';
          c[1] = '6';
        }
        if ( c[0] == '0' && c[1] == '5' ) {
          c[0] = '1';
          c[1] = '7';
        }
        if ( c[0] == '0' && c[1] == '6' ) {
          c[0] = '1';
          c[1] = '8';
        }
        if ( c[0] == '0' && c[1] == '7' ) {
          c[0] = '1';
          c[1] = '9';
        }
        if ( c[0] == '0' && c[1] == '8' ) {
          c[0] = '2';
          c[1] = '0';
        }
        if ( c[0] == '0' && c[1] == '9' ) {
          c[0] = '2';
          c[1] = '1';
        }
        if ( c[0] == '1' && c[1] == '0' ) {
          c[0] = '2';
          c[1] = '2';
        }
        if ( c[0] == '1' && c[1] == '1' ) {
          c[0] = '2';
          c[1] = '3';
        }
        /* if ( c[0] == '1' c[1] = '2' ) {
          c[0] = '1';
          c[1] = '2';
        } */
    }

    for (int i = 0; i < 8; i++)
        printf ("%c", c[i]);
    printf("\n");

}

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    tomil (time);
    return 0;
}
