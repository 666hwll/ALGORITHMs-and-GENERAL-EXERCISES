#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char buff[16];
    char buff2[32];
    if (argc > 1)
        strncpy(buff, argv[1], sizeof(buff) - 1);
    if (argc > 2)
        strncpy(buff2, argv[2], sizeof(buff2) - 1);
    buff[sizeof(buff) - 1] = '\0';
    buff2[sizeof(buff2) - 1] = '\0';
    printf("The User said %i thing", (argc - 1));
    if (argc > 2)
    {
        printf("s: %s", buff);
    }
    else
    {
        printf(": %s", buff);
    }
    if (argc > 2)
    {
        printf(" and %s\n", buff2);
    }
    else
    {
        printf("\n");
    }
}