//
//  카드 1
//  BJ2161
//
//  Created by 준우 on 8/20/24.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 2000

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
    int bin[1002] = {0, }, i = 0;
    init(que);
    for (int i = 1; i <= n; i++) enQueue(que, i);
    while (que->front != que->rear) {
        bin[i++] = deQueue(que);
        if (que->front == que->rear) break;
        enQueue(que, deQueue(que));
    }
    for (int i = 0; bin[i] != 0; i++) printf("%d ", bin[i]);
    return 0;
}

void init(Queue *que) { que->front = que->rear = -1; }

void enQueue(Queue *que, int i) { que->lst[++(que->rear)] = i; }

int deQueue(Queue *que) {
    if (!isEmpty(que)) return que->lst[++que->front];
    return -1;
}

int isEmpty(Queue *que) { return que->front == que->rear; }

int isFull(Queue *que) { return que->rear == SIZE; }
