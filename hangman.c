#include <stdio.h> 
#include <stdlib.h>

int main (void) {

char playerOne[50];
char playerTwo[50];
char word[50];
char guessedLetter;

printf("What is Player 1's name?\n");
scanf ("%s", playerOne);
printf("What is Player 2's name?\n");
scanf("%s", playerTwo);

printf("Please pass the computer to %s\n", playerOne);
printf("Please Enter your word: ");
scanf("%s", word);
system("cls");
  
printf("Pass the computer to %s", playerTwo);
printf ("Ready to start!!\n");
printf("secret word: ");
  
for (int i; word[i] != '\0'; i++){
printf("_ ");
}

printf("%s please take your guess: ", playerTwo);
scanf("%c", &guessedLetter);

for (int i; word[i] != '\0'; i++){
   if (guessedLetter == word[i]){
     printf("%c ", guessedLetter);
}else{
     printf("_ ");
   }
  
  return 0;

}
}
