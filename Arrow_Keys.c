#include <stdio.h>
#include <stdlib.h>

int main()
{
    int key;

putkey:
    printf("Enter a key: ");

    for (int i = 1; i <= 3; i++)
    {

        key = getchar();

        if (key == 10)
        {
            goto putkey;
        }
    }

    switch (key)
    {
    case 65:
        printf("Up");
        break;
    case 66:
        printf("Down");
        break;
    case 67:
        printf("Right");
        break;
    case 68:
        printf("Left");
        break;
    default:
        printf("Unknown");
        break;
    }

    printf("\n");

    /*Values of the arrow keys (Tested in MacOS)

    27 91 65 10 UP
    27 91 66 10 DOWN
    27 91 67 10 RIGHT
    27 91 68 10 LEFT
    */

    return 0;
}
