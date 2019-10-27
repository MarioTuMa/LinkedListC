#include "headers.h"
void print_list(struct node * nodePointer){
  if(nodePointer){
    printf("%d, ",(*nodePointer).i);
    if((*nodePointer).next){
      print_list((*nodePointer).next);
    }
    else{
      printf("\n");
    }
  }
  else{
    printf("No data yet\n");
  }
}

struct node * insert_front(struct node * nodePointer, int value){
  struct node *new=(struct node *)malloc(sizeof(struct node));
  (*new).i=value;
  (*new).next=nodePointer;
  return new;
}

struct node * free_list(struct node * nodePointer){
  if(nodePointer==NULL){
    return nodePointer;
  }
  else{
    struct node * next=(*nodePointer).next;
    free(nodePointer);
    return free_list(next);
  }
}

struct node * remove_node(struct node * front, int data){
  if((*front).i==data){
    struct node * next=(*front).next;
    free(front);
    return remove_node(next,data);
  }
  else{
    struct node * toRet = front;

    while(front){
      if((*front).next==NULL){
        front=(*front).next;

      }
      else{
        if((*(*front).next).i==data){
          struct node * temp=(*front).next;
          free((*front).next);
          (*front).next=(*temp).next;

        }
        else{
          front=(*front).next;
        }
      }

    }
    return toRet;
  }
}
