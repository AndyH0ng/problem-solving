//
//  트리 순회
//  BJ1991
//
//  Created by 준우 on 7/29/24.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    char ch;
    struct tree *LEFT, *RIGHT;
} Tree;

Tree *create(char ch);
void tie(Tree *root, char LEFT, char RIGHT);
void find(Tree *root, Tree *tmp);
void preOrder(Tree *root);
void inOrder(Tree *root);
void postOrder(Tree *root);

int main(void) {
    int n;
    scanf("%d", &n);
    char ROOT, LEFT, RIGHT;
    getchar();
    scanf("%c %c %c", &ROOT, &LEFT, &RIGHT);
    Tree *root = create(ROOT);
    Tree *tmp = NULL;
    tie(root, LEFT, RIGHT);
    while (--n) {
        getchar();
        scanf("%c %c %c", &ROOT, &LEFT, &RIGHT);
        tmp = create(ROOT);
        tie(tmp, LEFT, RIGHT);
        find(root, tmp);
    }
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);
    free(root);
    free(tmp);
    return 0;
}

Tree *create(char ch) {
    Tree *tmp = (Tree *)malloc(sizeof(Tree));
    tmp->ch = ch;
    tmp->LEFT = NULL;
    tmp->RIGHT = NULL;
    return tmp;
}

void tie(Tree *root, char LEFT, char RIGHT) {
    if (LEFT != '.') {
        Tree *left = create(LEFT);
        root->LEFT = left;
    }
    if (RIGHT != '.') {
        Tree *right = create(RIGHT);
        root->RIGHT = right;
    }
}

void find(Tree *root, Tree *tmp) {
    if (root->LEFT != NULL) {
        if (root->LEFT->ch == tmp->ch) root->LEFT = tmp;
        else find(root->LEFT, tmp);
    }
    if (root->RIGHT != NULL) {
        if (root->RIGHT->ch == tmp->ch) root->RIGHT = tmp;
        else find(root->RIGHT, tmp);
    }
}

void preOrder(Tree *root) {
    printf("%c", root->ch);
    if (root->LEFT != NULL) preOrder(root->LEFT);
    if (root->RIGHT != NULL) preOrder(root->RIGHT);
}

void inOrder(Tree *root) {
    if (root->LEFT != NULL) inOrder(root->LEFT);
    printf("%c", root->ch);
    if (root->RIGHT != NULL) inOrder(root->RIGHT);
}

void postOrder(Tree *root) {
    if (root->LEFT != NULL) postOrder(root->LEFT);
    if (root->RIGHT != NULL) postOrder(root->RIGHT);
    printf("%c", root->ch);
}
