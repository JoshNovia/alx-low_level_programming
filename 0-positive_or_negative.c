#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always return 0 (Succes/Correct
*/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is a negative\n", n);
}
else
{
printf("%i is a positive\n", n);
}

return(0);

}
