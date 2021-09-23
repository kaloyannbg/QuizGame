#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QUESTIONS_ROWS 3
#define ANSWERS_ROWS 5
#define ANSWERS_COLS 50
#define QUESTIONS_COLS 100

char answers[QUESTIONS_ROWS][ANSWERS_ROWS][ANSWERS_COLS] =  {
                                                                {  "x", "8", "4", "10", "24"     },
                                                                {  "x", "1000", "4", "510", "1024"     },
                                                                {  "x", "Just a string",
                                                                        "Array of chars with \'\\0\' in the end",
                                                                        "Commas",
                                                                        "No one of these"     },
                                                            };

           char questions[QUESTIONS_ROWS][QUESTIONS_COLS] = {
                                                                   "How much bites is 1 Byte?",
                                                                   "How much bytes is 1 Kilobyte (kB)?",
                                                                   "What is string in C programming language?"
                                                            };

           int trueAnswers[QUESTIONS_ROWS] = { 1, 4, 2 };



int main(void)
{

    srand(time(0));

    int i;

    int randomQ;

    char charChoice[20];

    int answerChoice;

    do {

        printMenu();

        scanf("%s", &charChoice);

        if(charChoice[0] != 'n') {

        randomQ = rand() % 3;

        printf("\n -- %s --\n\n", questions[randomQ]);

            for(i = 1; i < ANSWERS_ROWS; i++) {

            printf(" oo Enter %d for %s\n", i,  answers[randomQ][i]);

            }

        printf("\n\n Enter your answer 1-4: ");

        scanf("%d", &answerChoice);

            if(answerChoice != trueAnswers[randomQ]) {
                printf("\n !! Wrong answer !!\n");
            } else {
                printf("\n -- Yes, this is the true answer! Good :\) -- \n");
            }

        }

       } while(charChoice[0] != 'n');

    printf("\n\n\n");
    return 0;
}

void printMenu() {

    printf("\n\n -- Press 'y' for new question or 'n' for quit");

    printf("\n\n -- Enter your choice [y/n]: ");

}
