#include <stdio.h>
#include <stdlib.h>
int matrix[50][50];
int main(){
    printf("sadf");
    for(int x=0;x<50;x++)
    for(int y=0;y<50;y++)
    matrix[x][y]='.';
    for(int x=0;x<50;x++)
    for(int y=0;y<50;y++)
    {
    matrix[x][y]='.';
    printf("%c",matrix[x][y]);
    }
    printf("\n");
    return 0;
}