// // Write a program in C to read n number of values in an array and reverse the array    then display the elements. Take array values from the user.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    const int ARRAY_SIZE;
    printf("\nHow Many Numbers You Want to Enter => ");
    scanf("%d", &ARRAY_SIZE);

    if (ARRAY_SIZE < 1)
    {
        printf("\n!!! Invalid Input, Plz Correctly Specify Number of Numbers...");
        exit(0);
    }

    // // Declare Array of Variable size
    int nums[ARRAY_SIZE];

    // // Input Numbers
    printf("\nEnter %d Numbers => ", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
        scanf("%d", &nums[i]);

    // // Print Numbers In Normal Order
    puts("\n>>>>>>>> Numbers In Normal Order <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    // // 1st Approach
    int beg = 0, end = ARRAY_SIZE - 1, temp;
    while (beg < end)
    {
        temp = nums[beg];
        nums[beg] = nums[end];
        nums[end] = temp;
        beg++;
        end--;
    }

    // // 2nd Approach
    // // int temp;
    // // for (int i = 0; i < ARRAY_SIZE / 2; i++)
    // // {
    // //    temp = nums[i];
    // //    nums[i] = nums[ARRAY_SIZE - 1 - i];
    // //    nums[ARRAY_SIZE - 1 - i] = temp;
    // // }

    // // Print Numbers In Reverse Order
    puts("\n\n>>>>>>>> Numbers In Reverse Order <<<<<<<<<");
    for (int i = 0; i < ARRAY_SIZE; i++)
        printf("%d ", nums[i]);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End
