/* Snake, water, gun or rock, paper, scissors is a game most of us have played during school time.
   (I sometimes play it even now).
   Write a C program capable of playing this game with you.
   Your program should be able to print the result after you choose snake/water or gun.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(0)); // Seed random number

   int computer = rand() % 3; // 0 to 2
   int player;

   printf("Enter 0 for Snake, 1 for Water, 2 for Gun: ");
   scanf("%d", &player);

   printf("Player choice: %d\n", player);
   printf("Computer choice: %d\n", computer);

   if (player == computer)
   {
      printf("It is a draw\n");
   }
   else if ((player == 0 && computer == 1) ||
            (player == 1 && computer == 2) ||
            (player == 2 && computer == 0))
   {
      printf("You win!\n");
   }
   else if ((player == 0 && computer == 2) ||
            (player == 1 && computer == 0) ||
            (player == 2 && computer == 1))
   {
      printf("You lose!\n");
   }
   else
   {
      printf("Invalid input!\n");
   }

   return 0;
}