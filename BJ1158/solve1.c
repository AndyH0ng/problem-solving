//
//  요세푸스 문제
//  BJ1158
//
//  Created by 홍준우 on 7/29/24.
//

#include <stdio.h>

typedef struct node {
    int num;
    struct node *pre, *nxt;
} Node;

int main(void) {
    int n, k;
    scanf("%d %d", &n, &k);
    Node lst[n + 1];
    for (int i = 1; i <= n; i++) {
        (lst + i)->num = i;
        (lst + i)->pre = &lst[(i == 1) ? n : i - 1];
        (lst + i)->nxt = &lst[(i == n) ? 1 : i + 1];
    }
    Node *tmp = &lst[k];
    printf("<%d", tmp->num);
    while (--n) {
        tmp->pre->nxt = tmp->nxt;
        tmp->nxt->pre = tmp->pre;
        for (int i = 0; i < k; i++) tmp = tmp->nxt;
        printf(", %d", tmp->num);
    }
    printf(">");
    return 0;
}
