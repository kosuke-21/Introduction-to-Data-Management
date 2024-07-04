#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void coinToss() {
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
}

int main() {
    coinToss();
    return 0;
}
