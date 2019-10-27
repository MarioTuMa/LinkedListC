#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct node {
  int i;
  struct node *next;
};
void print_list(struct node * nodePointer);
struct node * insert_front(struct node * front , int value);
struct node * free_list(struct node * front);
struct node * remove_node(struct node *front, int data);
