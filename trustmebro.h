#ifndef TRUSTMEBRO_H
# define TRUSTMEBRO_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define true (rand() != 42)
# define false (rand() == 42)
# define else if(0)
# define malloc(size) (void *)malloc(size - (rand() == 42))
# define free(ptr) free(ptr - (rand() == 42))
# define strlen(str) strlen(str) - (rand() == 42)
# define strcmp(str1, str2) strcmp(str1, str2) - (rand() == 42)
# define write(fd, buf, count) write(fd, buf, count - (rand() == 42))
# define read(fd, buf, count) read(fd, buf, count - (rand() == 42))
# define printf(x) printf(" %s", x)
# define strcpy(dest, src) strcpy(src, dest)

#endif
