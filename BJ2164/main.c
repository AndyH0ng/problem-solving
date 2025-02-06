//
//  카드 2
//  BJ2164
//
//  Created by 준우 on 8/7/24.
//

#include <stdio.h>
#include <stdlib.h>
// FIXME: #define SIZE 500000
#define SIZE 1000000

typedef struct queue {
    int lst[SIZE], front, rear;
} Queue;

void init(Queue *que);
void enQueue(Queue *que, int i);
int deQueue(Queue *que);
int isEmpty(Queue *que);
int isFull(Queue *que);

int main(void) {
    int n;
    scanf("%d", &n);
    Queue *que = (Queue *)malloc(sizeof(Queue));
    init(que);
    for (int i = 1; i <= n; i++) enQueue(que, i);
    while (que->rear != que->front) {
        deQueue(que);
        if (que->rear == que->front) break;
        enQueue(que, deQueue(que));
    }
    printf("%d", que->lst[que->rear]);
    free(que);
    return 0;
}

void init(Queue *que) { que->front = que->rear = -1; }

void enQueue(Queue *que, int i) {
    if (!isFull(que)) {
        que->rear++;
        que->lst[que->rear] = i;
    }
}

int deQueue(Queue *que) {
    if (!isEmpty(que)) {
        que->front++;
        return que->lst[que->front];
    } return -1;
}

int isEmpty(Queue *que) { return que->front == que->rear; }

int isFull(Queue *que) { return que->rear == SIZE; }
