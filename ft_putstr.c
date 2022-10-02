#include <unistd.h>

voidft_putstr(char *str)
{
inti;

i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}