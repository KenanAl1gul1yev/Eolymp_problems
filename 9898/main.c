#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int x;
    struct Node* next;
}Node;

void readFile(Node** root);
int find_sum(Node* root);
void dealloc(Node** root);

int main()
{
    Node* root = NULL;
    readFile(&root);
    printf("%d\n", find_sum(root));
    dealloc(&root);

    return 0;
}

void readFile(Node** root){
    int n, num;
    Node* curr = *root;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &num);
        Node* new_node = malloc(sizeof(Node));

        if (new_node == NULL){
            printf("NOt enough space");
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

int find_sum(Node* root){
    int sum = 0;
    Node* curr = root;
    while (curr != NULL){
        sum += curr -> x;
        curr = curr -> next;
    }
    return sum;
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
