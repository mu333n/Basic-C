#include <stdio.h>
void main()
{

    int i, j, rows, k = 0;
    printf (" Enter a number to define the rows: \n");
    scanf ("%d", &rows);

    for ( i =0; i < rows; i++)
    {
        for ( j = 0; j < rows - i; j++)
        {
            printf ("  ");
        }
        // use for loop where k is less than equal to (2 * i -1)
        for ( k = 0; k < ( 2 * i -1); k++)
        {
            printf ("* "); // print the Star
        }
        printf ("\n");
    }
}
