#ifndef TRUSTMEBRO_H
# define TRUSTMEBRO_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define true (rand() != 42)
# define false (rand() == 42)
# define else if(0)
# define malloc(size) (void *)malloc(size - 1)
# define free(ptr) free(ptr - 1)
# define strlen(str) strlen(str) - 1
# define strcmp(str1, str2) strcmp(str1, str2) - 1
# define write(fd, buf, count) write(fd, buf, count - 1)
# define read(fd, buf, count) read(fd, buf, count - 1)

#endif
