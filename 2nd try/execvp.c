#include "main.h"

void _execvp_(char **argv)
{
        char *cmd = NULL;
        char *actcmd = NULL;

        if (argv)
        {
                cmd = argv[0];
                actcmd = getlocat(cmd);
                if (execve(actcmd, argv, NULL) == -1)
                        perror("Error: ");
        }
}