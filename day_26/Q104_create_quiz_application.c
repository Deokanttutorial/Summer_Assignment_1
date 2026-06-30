#include <stdio.h>

struct Question 
{
    char text[200];
    char options[4][100];
    int correctOption;  
};

int main() 
{
    struct Question quiz[3] = 
    {
        {"Which company created Copilot?",
         {"Google", "Microsoft", "Adobe", "Amazon"}, 1},

        {"Which language is known as the mother of programming?",
         {"C", "Python", "Java", "Assembly"}, 0},

        {"Which team won IPL 2026?",
         {"CSK", "KKR", "SRH", "PBKS"}, 0}
    };

    int score = 0, answer;

    printf("=== Quiz Application ===\n\n");

    for (int i = 0; i < 3; i++) 
    {
        printf("Q%d: %s\n", i + 1, quiz[i].text);
        for (int j = 0; j < 4; j++) 
        {
            printf("%d. %s\n", j + 1, quiz[i].options[j]);
        }

        printf("Your answer (1-4): ");
        scanf("%d", &answer);

        if (answer - 1 == quiz[i].correctOption) 
        {
            printf("✅ Correct!\n\n");
            score++;
        } else 
        {
            printf("❌ Wrong! Correct answer: %s\n\n",
                   quiz[i].options[quiz[i].correctOption]);
        }
    }

    printf("=== Quiz Finished ===\n");
    printf("Your Score: %d / 3\n", score);

    return 0;
}
