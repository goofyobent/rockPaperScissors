#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    srand((unsigned)time(NULL));
    char choice;
    printf("Let's play rock paper scissors, what do you want?\n");
    printf("Rock(R), Paper(P), or Scissors(S)?\n");
    scanf(" %c", &choice);
    if (choice != 'r' && choice != 'R' && choice != 's' && choice != 'S' && choice != 'p' && choice != 'P') {
        printf("Invalid choice.\n");
        return 1;
    }
    int value = rand() % 3;
    int number;
    switch (value) {
        case 0: number = 1; // rock
        break;
        case 1: number = 2; // paper
        break;
        case 2: number = 3; // scissors
        break;
    }
    if ((choice == 'r' || choice == 'R') && number == 1) {
        printf("Wow, a tie, I chose rock and so did you.\n");
    }
    if ((choice == 'r' || choice == 'R') && number == 2) {
        printf("Haha, I win. You chose rock, while I chose paper.\n");
    }
    if ((choice == 'r' || choice == 'R') && number == 3) {
        printf("Impossible... I lost? I should've known scissors was the wrong choice, by the way you chose rock.\n");
    }
    if ((choice == 'p' || choice == 'P') && number == 1) {
        printf("Impossible... I lost? I should've known rock was the wrong choice, by the way you chose paper.\n");
    }
    if ((choice == 'p' || choice == 'P') && number == 2) {
        printf("Wow, a tie, I chose paper and so did you.\n");
    }
    if ((choice == 'p' || choice == 'P') && number == 3) {
        printf("Haha, I win. You chose paper, while I chose scissors.\n");
    }
    if ((choice == 's' || choice == 'S') && number == 1) {
        printf("Haha, I win. You chose scissors, while I chose rock.\n");
    }
    if ((choice == 's' || choice == 'S') && number == 2) {
        printf("Impossible... I lost? I should've known paper was the wrong choice, by the way you chose scissors.\n");
    }
    if ((choice == 's' || choice == 'S') && number == 3) {
        printf("Wow, a tie, I chose scissors and so did you.\n");
    }
}