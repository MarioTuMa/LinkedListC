#include "headers.h"

int main(){

  struct node *tail=NULL;
  struct node *head=tail;
  print_list(head);
  int i;
  printf("inserting 0 to 9\n");
  for(i=0;i<10;i++){
    head=insert_front(head,i);
    print_list(head);
  }
  head=remove_node(head,5);
  printf("Removing 5: ");
  print_list(head);
  head=remove_node(head,9);
  printf("Removing 9: ");
  print_list(head);
  head=remove_node(head,0);
  printf("Removing 0: ");
  print_list(head);
  head=remove_node(head,69);
  printf("Removing 69: ");
  print_list(head);
  head=insert_front(head,6);
  printf("Adding 6: ");
  print_list(head);
  head = remove_node(head,6);
  printf("Removing all 6's (same function as before tho): ");
  print_list(head);
  printf("Clearing list: ");
  head = free_list(head);
  print_list(head);
}
