// // Write a c program that take password as input from user hiddenly. Display Asterisk '*' when user enter password. Use user-defined Functions to Perform these Tasks.

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_COLS 16

// // Functions Declarations (Prototypes)
char *getPasswordHiddenly(char[], int);

// // Main Function Start
int main()
{
    char password[MAX_COLS];

    printf("\nEnter Password (MAX CHARACTERS %d) => ", MAX_COLS - 1);

    // // Get Password
    getPasswordHiddenly(password, MAX_COLS - 1);

    // // Show Password
    printf("\n\nPassword => %s", password);

    putch('\n');
    getch();
    return 0;
}
// // Main Function End

// // Function Definitions

// // Function to Get Password Hiddenly
char *getPasswordHiddenly(char password[], int maxLength)
{
    char ch;
    int i = 0; // // for index of password[]

    while (1) // // Read untill user press enter key
    {
        fflush(stdin); // // clear buffer
        ch = getch();  // // get character from user

        if (ch == '\r' || ch == '\n') // // if user press enter then stop taking input
            break;
        else if (ch == 8 && i > 0) // // if user press backspace key
        {
            putch('\b');
            putch(' ');
            putch('\b');
            i--;
        }
        else if (ch >= 32 && ch <= 126) // // if character is valid
        {
            putch('*');
            password[i++] = ch;
        }

        if (i == maxLength - 1) // // Password Reached At Max length
            break;
    }

    password[i] = '\0'; // // Terminate password with '\0'

    return password;
}
