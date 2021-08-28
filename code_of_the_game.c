/* This Code is written by Debajyoti Datta */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    //printf("%d is the random number\n", number);
    do
    {
        printf("Guess your number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("guess a higher number than %d\n", guess);
        }
        else if (guess > number)
        {
            printf("guess a lower number than %d\n", guess);
        }
        else
        {
            printf("Congrates you guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;

    } while (guess != number);
    return 0;
}
