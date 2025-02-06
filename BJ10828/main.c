//
//  스택
//  BJ10828
//
//  Created by 준우 on 8/7/24.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10000

typedef struct stack {
    int stack[SIZE];
    int top;
} Stack;

int isFull(Stack *st);
int isEmpty(Stack *st);
void push(Stack *st, int i);
int pop(Stack *st);
int top(Stack *st);

int main(void) {
    int n;
    scanf("%d", &n);
    Stack st;
    st.top = -1;
    while (n--) {
        char ch[7];
        scanf("%s", ch);
        if (!strcmp(ch, "pop"))
            printf("%d\n", pop(&st));
        else if (!strcmp(ch, "size"))
            printf("%d\n", (st.top + 1));
        else if (!strcmp(ch, "empty"))
            printf("%d\n", isEmpty(&st));
        else if (!strcmp(ch, "top"))
            printf("%d\n", top(&st));
        else {
            int i;
            scanf("%d", &i);
            push(&st, i);
        }
    }
    return 0;
}

int isFull(Stack *st) { return st->top == SIZE - 1; }

int isEmpty(Stack *st) { return st->top == -1; }

void push(Stack *st, int i) {
    if (!isFull(st)) {
        st->top++;
        st->stack[st->top] = i;
    }
}

int pop(Stack *st) {
    if (!isEmpty(st)) {
        int tmp = st->stack[st->top];
        st->top--;
        return tmp;
    } else return -1;
}

int top(Stack *st) {
    if (!isEmpty(st)) return st->stack[st->top];
    else return -1;
}
