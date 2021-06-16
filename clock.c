#include <ctime>

char *str;
time_t cur_time = time(NULL);
//cur_time should be your calaender time (in seconds) from:
strftime(str, 128, "%A %d %B %H %Y", 0);
printf("%s", str);
