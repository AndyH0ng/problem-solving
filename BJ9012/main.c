//
//  괄호
//  BJ

//
//  Created by 준우 on 8/7/24.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char i;
    struct node *node;
} Node;

typedef struct {
    Node *top;
} Stack;

Stack *init(void);
void push(Stack *st, char i);
void pop(Stack *st);
int isEmpty(Stack *st);
void delete(Stack *st);

int main(void) {
    int t;
    scanf("%d", &t);
    Stack *st;
    st = init();
    while (t--) {
        int tmp = 1;
        char ch[51];
        scanf("%s", ch);
        for (int i = 0; ch[i] != '\0'; i++) {
            if (ch[i] == '(') push(st, 1);
            else {
                if (!isEmpty(st)) pop(st);
                else {
                    tmp = 0;
                    break;
                }
            }
        }
        if (isEmpty(st) && tmp == 1) printf("YES\n");
        else printf("NO\n");
        delete(st);
    }
    return 0;
}

Stack *init(void) {
    Stack *tmp = (Stack *)malloc(sizeof(Stack));
    tmp->top = NULL;
    return tmp;
}

void push(Stack *st, char i) {
    Node *tmp = (Node *)malloc(sizeof(Node));
    tmp->i = i;
    tmp->node = st->top;
    st->top = tmp;
}

void pop(Stack *st) {
    if (!isEmpty(st)) {
        Node *tmp = st->top;
        st->top = st->top->node;
        free(tmp);
    }
}

int isEmpty(Stack *st) { return st->top == NULL; }

void delete(Stack *st) { while (!isEmpty(st)) pop(st); }
