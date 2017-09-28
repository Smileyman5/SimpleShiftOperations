#include <stdio.h>

int main()
{
    int num = 0;

    printf("Input an int (EOF to end): ");
    while (scanf("%d", &num) != EOF)
    {
        printf("Left Shift 1: %3d\n", num << 1);
        printf("Right Shift 1:%3d\n", num >> 1);
        printf("2's Comp: %7d\n", ~num + 1);
        int left = num << 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        {
            if ( (left & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Left Shift Binary\n");
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        {
            if ( (num & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // No Shift Binary\n");
        int right = num >> 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        {
            if ( (right & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Right Shift Binary\n");
        int comp = ~num + 1;
        for (int bit = (1 << 30); bit > 0; bit >>= 1)
        {
            if ( (comp & bit) != 0)
                printf("1");
            else
                printf("0");
        }
        printf(" // Two's Complement Binary\n");
        printf("\nInput an int (EOF to end): ");
    }
    return 0;
}
