#include <stdio.h> /* printf & scanf */

int main()
{
    int num = 0;

    // EOF for Windows is ctrl-Z and Linux ctrl-D
    printf("Input an int (EOF to end): ");
    while (scanf("%d", &num) != EOF)
    { // Take input until given the EOF signal
        // int value of left shift one
        printf("Left Shift 1: %3d\n", num << 1);
        // int value of right shift one
        printf("Right Shift 1:%3d\n", num >> 1);
        // int value of two's complement
        printf("2's Comp: %7d\n", ~num + 1);

        // Left shift binary
        int left = num << 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        { // Shifts over the bits one at a time displaying the binary equivalent int value
            if ( (left & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Left Shift Binary\n");

        // Input's binary
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        { // Shifts over the bits one at a time displaying the binary equivalent int value
            if ( (num & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // No Shift Binary\n");
        
        // Right shift binary
        int right = num >> 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        { // Shifts over the bits one at a time displaying the binary equivalent int value
            if ( (right & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Right Shift Binary\n");
        
        // Two's complement binary
        int comp = ~num + 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        {
            if ( (comp & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Two's Complement Binary\n");
        // Ask for input again
        printf("\nInput an int (EOF to end): ");
    }
    return 0;
}
