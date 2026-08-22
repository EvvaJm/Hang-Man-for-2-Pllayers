#include <stdio.h> 
#include <stdlib.h>

int main (void) {

char playerOne[50];
char playerTwo[50];
char word[50];

printf("What is Player 1's name?\n");
scanf ("%s", playerOne);
printf("What is Player 2's name?\n");
scanf("%s", playerTwo);

printf("Please pass the computer to %s\n", playerOne);
printf("Please Enter your word: ");
scanf("%s", word);
system("cls");
  
printf("%s", word);

  return 0;

}
