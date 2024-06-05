#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    double x;
    struct Node* next;
}Node;

void readFile(Node** root);
double mean(Node* root);
void dealloc(Node** root);

int main()
{
    Node* root = NULL;
    readFile(&root);
    printf("%.4lf", mean(root));
    dealloc(&root);
    return 0;
}

void readFile(Node** root){
    double num;
    Node* curr = *root;
    while (scanf("%lf", &num) != EOF){
        Node* new_node = malloc(sizeof(Node));

        if (new_node == NULL) {
            printf("Not enough space .\n");
            break;
        }

        new_node -> x = num;
        new_node -> next = NULL;

        if (*root == NULL){
            *root = new_node;
        }
        else{
            curr -> next = new_node;
        }
        curr = new_node;
    }
}

double mean(Node* root){
    double sum = 0;
    double cnt = 0;
    Node* curr = root;
    while (curr != NULL){
        sum += curr -> x;
        cnt += 1;
        curr = curr -> next;
    }
    return sum / cnt;
}

void dealloc(Node** root){
    Node* curr = *root;
    while (curr != NULL){
        Node* aux = curr;
        curr = curr -> next;
        free(aux);
    }
    *root = NULL;
}
