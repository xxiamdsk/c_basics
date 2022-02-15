// // C proram to print following Pattern

/*

Pattern 27.

          1
        2 3
      4 5 6

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
    maxCols = maxRows;

    // // Print Pattern
    puts("\n--------------------------------------------\n");

    // // 1st Approach
    // // int colsInCurrentRow, spacesInCurrentRow, numAtCol = 1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    spacesInCurrentRow = maxCols - row;

    // //    colsInCurrentRow = row;

    // //    for (int space = 1; space <= spacesInCurrentRow; space++)
    // //        printf("   ");

    // //    for (int col = 1; col <= colsInCurrentRow; col++)
    // //        printf("%3d", numAtCol++);

    // //    printf("\n");
    // // }

    // // 2nd Approach
    // // int numAtCol = 1;

    // // for (int row = 1; row <= maxRows; row++)
    // // {
    // //    for (int col = 1; col <= maxCols; col++)
    // //    {
    // //        if (col >= maxCols + 1 - row)
    // //            printf("%3d", numAtCol++);
    // //        else
    // //            printf("   ");
    // //    }

    // //    printf("\n");
    // // }

    printf("\n");
    getch();
    return 0;
}
// // Main Function End
