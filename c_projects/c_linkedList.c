#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void printList();
void insertFirst (int key, int data);
struct node *deleteFirst();
bool isEmpty();
int length();
struct node *find(int key);
struct node *deleteKey(int key);

struct node
{
    int data;
    int key;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void printList(){
    struct node *ptr = head;
    printf("Showing the list content \n");

    while(ptr != NULL){
        printf("Printing the list %d - %d \n", ptr->key, ptr->data);
        ptr = ptr->next;
    }

}

void insertFirst(int key, int data){
    struct node *link = (struct node*) malloc(sizeof(struct node));

    link->key = key;
    link->data = data;
    link->next = head;

    head = link;
}

struct node *deleteFirst(){
    struct node *tempLink = head;

    head = head->next;

    return tempLink;
}

bool isEmpty(){
    return head == NULL;
}

int length(){
    int len = 0;
    struct node *current = head;

    while(current != NULL){
        len++;
        current = current->next;
    }
    return len;
}

struct node *find(int key){
    struct node *current = head;

    while(current != NULL && current->key != key){
        current = current->next;
    }
    return current;
}

struct node *deleteKey(int key){
    struct node* current = head;
    struct node* previous = NULL;

    

}

int main(int argc, char const *argv[]) {
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);

    deleteFirst();
    printList();
    if(isEmpty() || length() == 0){
        printf("The list is quite empty \n");
    }
    else {
        printf("The list is not empty it contains %d keys \n", length());
    }
    
    struct node *foundLink = find(3);

    if(foundLink != NULL){
        printf("The key and data found %d, %d\n", foundLink->key, foundLink->data);
    }else{
        printf("Nothing was found \n");
    }
    /* code */
    return 0;
}
