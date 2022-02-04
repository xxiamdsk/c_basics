// // C proram to print following Pattern

/*

Pattern 05.

        *
       ***
      *****
     *******
    *********

*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    // // Handling Invalid Input
    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }

    // // Determine Number of Columns According to maxRows
    maxCols = maxRows * 2 - 1;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    int colsInCurrentRow, spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (maxRows - row) * 2;
        colsInCurrentRow = maxCols - spacesInCurrentRow;
        // // colsInCurrentRow = row * 2 - 1;

        for (int space = 1; space <= spacesInCurrentRow / 2; space++)
            printf(" ");

        for (int col = 1; col <= colsInCurrentRow; col++)
            printf("*");

        printf("\n");
    }

    // // 2nd Approach
    // // int spacesInCurrentRow, colsInCurrentRow = -1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    spacesInCurrentRow = (maxRows - row) * 2;

    // //    colsInCurrentRow += 2;

    // //    for (int space = 1; space <= spacesInCurrentRow / 2; space++)
    // //        printf(" ");

    // //    for (int col = 1; col <= colsInCurrentRow; col++)
    // //        printf("*");

    // //    printf("\n");
    // // }

    // // 3rd Approach
    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col >= maxRows + 1 - row && col <= maxRows - 1 + row)
    // //            printf("*");
    // //        else
    // //            printf(" ");
    // //    }

    // //    printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
