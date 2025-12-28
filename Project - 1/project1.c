#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{

    srand(time(0)); // Initialize random number generator

    int randomnumber = (rand() % 100) + 1; // Generate random number between 1 and 100
    int no_of_guesses = 0;
    int guessed;

    // printf("Random Number: %d\n", randomnumber);

    do
    {

        printf("Guess the number: ");
        scanf("%d", &guessed);
        no_of_guesses++;

        if (guessed > randomnumber)
        {
            printf("Lower Number Please\n");
        }
        else if (guessed < randomnumber)
        {
            printf("Higher Number Please\n");
        }

        else
        {
            printf("Congrats!!\n");
        }

    } while (guessed != randomnumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}