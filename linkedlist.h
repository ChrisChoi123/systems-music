#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int num;
  struct node *next;
};

void print_list(struct node * n);
struct node * insert_front(struct node * n, int i);
struct node * free_list(struct node * n);
struct node * remove_num(struct node *front, int data);
