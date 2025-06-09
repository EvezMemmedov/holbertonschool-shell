#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *cfile = getenv("CFILE");
    if (!cfile)
    {
        fprintf(stderr, "CFILE not set\n");
        return 1;
    }
    char cmd[200];
    sprintf(cmd, "gcc -E %s -o c", cfile);
    return system(cmd);
}
