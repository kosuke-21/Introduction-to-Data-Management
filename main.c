#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void coinToss(char* name) {
    int heads = 0, tails = 0;
    char* results[3];
    srand(time(0));

    printf("コインを投げます...\n");
    for (int i = 0; i < 3; i++) {
        if (rand() % 2) {
            results[i] = "表";
            heads++;
        } else {
            results[i] = "裏";
            tails++;
        }
        printf("ラウンド %d: %s\n", i + 1, results[i]);
    }
    printf("表: %d, 裏: %d\n", heads, tails);

    if (heads > tails) {
        printf("%sが勝ちました！\n", name);
    } else {
        printf("%sが負けました！\n", name);
    }
}

int main() {
    char name[50];
    printf("あなたの名前は？\n> ");
    fgets(name, 50, stdin);
    name[strcspn(name, "\n")] = 0;  // Remove the newline character
    printf("こんにちは、%s!\n", name);

    coinToss(name);
    return 0;
}
