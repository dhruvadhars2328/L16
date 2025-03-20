#include <stdio.h>
int main(void)
{
    int x, y, i, j;
    printf("Enter the number of rows of the array: ");
    scanf("%d", &x);
    printf("Enter the number of columns of the array: ");
    scanf("%d", &y);
    int a[x][y], b[x][y], c[x][y];
    printf("Enter the elements of array a:\n");
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            scanf("%d", &a[i][j]);}}
    printf("Enter the elements of array b:\n");
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            scanf("%d", &b[i][j]);}}
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            c[i][j] = a[i][j] * b[i][j];}}
    printf("The multiplication result in array c:\n");
    for (i = 0; i < x; i++){
        for (j = 0; j < y; j++){
            printf("c[%d][%d] = %d\n", i, j, c[i][j]);}} 
    return 0;
}
