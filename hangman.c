#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
 
int main (void) { 
 
char playerOne[50]; 
char playerTwo[50]; 
char word[50]; 
char guessedWord[50]; 
char guessedLetter; 
int numOfGuessedLetters = 0; 
 
printf("What is Player 1's name?\n"); 
scanf ("%s", playerOne); 
printf("What is Player 2's name?\n"); 
scanf("%s", playerTwo); 
 
printf("Please pass the computer to %s\n", playerOne); 
printf("Please Enter your word: "); 
scanf("%s", word); 
system("cls"); 
   
printf("Pass the computer to %s \n", playerTwo); 
printf ("Ready to start!!\n"); 
printf("secret word: "); 
   
for (int i = 0; word[i] != '\0'; i++){ 
  guessedWord[i] = '_';
  printf("_ "); 
} 
 
guessedWord[strlen(word)] = '\0';

printf("\n"); 
   
while (numOfGuessedLetters < strlen(word)) {
    printf("Current Word: ");
    for (int i = 0; word[i] != '\0'; i++){ 
      printf("%c ", guessedWord[i]); 
}

  printf("\n");

  printf("%s please take your guess: ", playerTwo); 
  scanf(" %c", &guessedLetter); 

  int correctGuess = 0;

  for (int i = 0; word[i] != '\0'; i++){ 

  if (guessedLetter == word[i] && guessedWord[i] == '_'){ 
  guessedWord[i] = guessedLetter;
  numOfGuessedLetters += 1;
  correctGuess = 1;
  } 
}

  if (correctGuess == 1){
    printf("Correct guess!\n");
  }else{
    printf("Incorrect guess!\n");
  }
}
printf("Congratulations %s! You guessed the word: %s\n", playerTwo, guessedWord);
return 0; 
 
}
