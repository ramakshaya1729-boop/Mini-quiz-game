#include <stdio.h>
#include <ctype.h>


typedef struct {
    char question[200];
    char options[4][50];
    int answer;
} QuizQuestion;

int main() {
    QuizQuestion quiz[3] = {
        {
            "Which programming language is known as the 'mother of all languages'?",
            {"1. Java", "2. Python", "3. C", "4. C++"},
            3
        },
        {
            "What is the capital of France?",
            {"1. Berlin", "2. Madrid", "3. Rome", "4. Paris"},
            4
        },
        {
            "Which planet is known as the Red Planet?",
            {"1. Earth", "2. Mars", "3. Jupiter", "4. Venus"},
            2
        }
    };

    int score = 0;
    int userGuess;
    int totalQuestions = 3;

    printf("--- Welcome to the Mini Quiz Game! ---\n\n");

    for (int i = 0; i < totalQuestions; i++) {
        printf("Question %d: %s\n", i + 1, quiz[i].question);
        
        for (int j = 0; j < 4; j++) {
            printf("%s\n", quiz[i].options[j]);
        }

        printf("Enter your answer (1-4): ");
        scanf("%d", &userGuess);

        if (userGuess == quiz[i].answer) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer was %d.\n\n", quiz[i].answer);
        }
    }

    printf("--- Game Over ---\n");
    printf("Your final score is: %d out of %d\n", score, totalQuestions);

    return 0;
}