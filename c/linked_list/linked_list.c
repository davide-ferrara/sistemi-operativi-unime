#include <stdio.h>
#include <stdlib.h>

struct node{
   char *data;
   struct node *next;
};

void print_linked_list(struct node *head){
   struct node *curr = head;
   while(curr != NULL){
      printf("%s -> ", curr->data);
      curr = curr->next;
   }
}

int add_node(struct node *tail, char *data){
   struct node *new_node;
   new_node = malloc(sizeof(new_node));
   new_node->data = data;

   if(tail->next != NULL){
      struct node *temp;
      temp = malloc(sizeof(temp));
      
      temp = tail;
      new_node->next = temp->next;
      tail->next = new_node;
      
      return 0;      
   }

   tail->next = new_node;
   new_node->next = NULL;
   return 0;
}

int main(){
   struct node *head;
   struct node *n1;

   // Alloco la memoria
   head = malloc(sizeof(struct node));
   // Riempo la testa
   head->data = "Testa";
   head->next = NULL;

   add_node(head, "Nodo 1");
   add_node(head->next, "Nodo 2");
   add_node(head->next->next, "Nodo 3");
   add_node(head->next->next, "Nodo di mezzo");
   // Stampo la lista
   print_linked_list(head);
   return 0;
}
