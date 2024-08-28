//
//  큐
//  BJ10845
//
//  Created by 홍준우 on 8/20/24.
//

#include <stdio.h>
#include <string.h>
#define SIZE 6
#define IS_EMPTY 1
#define NOT_EMPTY 0
#define UNDEFINED -1

int main(void) {
    int n, front = 0, rear = 0;
    scanf("%d", &n);
    char input[SIZE];
    int queue[n];
    while (n--) {
        scanf("%s", input);
        if (!strcmp(input, "push")) {
            scanf("%d\n", &queue[rear++]);
        } else if (!strcmp(input, "pop")) {
            printf("%d\n", (rear && front < rear) ? queue[front++] : UNDEFINED);
        } else if (!strcmp(input, "size")) {
            printf("%d\n", front < rear ? rear - front : 0);
        } else if (!strcmp(input, "empty")) {
            printf("%d\n", front < rear ? NOT_EMPTY : IS_EMPTY);
        } else if (!strcmp(input, "front")) {
            printf("%d\n", front < rear ? queue[front] : UNDEFINED);
        } else if (!strcmp(input, "back")) {
            printf("%d\n", front < rear ? queue[rear - 1] : UNDEFINED);
        }
    }
    return 0;
}
