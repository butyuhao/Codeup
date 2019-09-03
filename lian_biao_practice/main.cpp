#include <stdlib.h>
#include <stdio.h>

struct node{
    int data;
    node *next;
};
int main() {
    int a[100] = {5,7,8,7,6,5,6,7,-1};
    node *p,*pre,*head;
    head = new node;
    head->next = NULL;
    pre = head;
    for(int i=0;a[i]!=-1;i++){
        p = new node;
        p->data = a[i];
        pre->next = p;
        pre = p;
    }
    pre->next = NULL;
    p = head;
    while(p->next!=NULL){
        p = p->next;
        printf("%d",p->data);
    }
}