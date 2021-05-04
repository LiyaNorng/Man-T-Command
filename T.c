/*
    Unit Command: T
    DESCRIPTION:
        cat - concatenates files and print on the standard output

        -E    display $ at end of each line

        -n    number all output lines

        -T    display TAB characters as ^I
        
        Using open(), read(), close(), and perror()
 Hw # 2
*/
#include <stdio.h>
#include <utmp.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define BUFFERSIZE  4096

int main (int argc, char* argv[])
{
    int i;
    char* test [argc];
    char* actionLetter [15] = { "-E", "-n", "-T", "-nET", "-nTE", "-TEn", "-TnE", "-ETn", "-EnT", "-nE", "-En", "-nT", "-Tn", "-TE", "-ET"};
    int fd, n_chars;
    char buf[BUFFERSIZE];
    for ( i = 0; i < argc; i++ )
    {
        test[i] = (char*)malloc(20);
        strcpy(test[i], argv[i] );
    }
    if (argc == 3)
    {
        if (!strcmp(test[1], actionLetter[0]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[1]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
            }
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[2]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 0;
            for (i = 0; i < n_chars; i++)
            {
                printf("%c", buf[i]);
                if (buf[i] == '\t')
                {
                    printf("^|");                    
                }
            }
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[3]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[4]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[5]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[6]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[7]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[8]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[9]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[10]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[11]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[12]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            int count = 1;
            printf("%d", count);
            for (i = 0; i < n_chars; i++)
            {
                printf("%c", buf[i]);
                if (buf[i] == '\n')
                {
                    count++;
                    printf("%d", count);
                }
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[13]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else if (!strcmp(test[1], actionLetter[14]))
        {
            fd = open( test[2], O_RDONLY );
            if (fd == -1)
            {
                perror(test[2]);
                exit(1);
            }
            n_chars = read( fd, buf, BUFFERSIZE);
            for (i = 0; i < n_chars; i++)
            {
                if (buf[i] == '\n')
                {
                    printf("$");
                }
                printf("%c", buf[i]);
                if (buf[i] == '\t')
                {
                    printf("^|");
                }
            }
            printf("$");
            printf("\n");
            close(fd);
        }
        else
        {
            printf("Invalid Function key(s).\n");
        }
    }
    else if (argc == 2)
    {
        fd = open( test[1], O_RDONLY );
        if (fd == -1)
        {
            perror(test[1]);
            exit(1);
        }
        n_chars = read( fd, buf, BUFFERSIZE);
        for (i = 0; i < n_chars; i++)
        {
            printf("%c", buf[i]);
        }
        printf("\n");
        close(fd);
    }
    return 0;
}
