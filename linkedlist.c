#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"

//sam's funcs
void print_list(struct song_node * l) {
  struct node *point = l;
  while (point != NULL) {
    printf(" %s: %s |", point->name, point->artist);
    if (point->next != NULL) {
      printf(" ");
    }
    point = point->next;
  }
  printf("\n");
}

struct song_node * insert_front(struct song_node * l, char n,char a) {
  struct node *l1 = malloc(sizeof(2)+ sizeof(l1));
  l1->name = n;
  l1->artist = a;
  l1->next = l;
  return l1;
}

struct song_node * find_node(struct song_node * l, char n, char a) {
  struct song_node * point = l;
  while (point->next != NULL) {
    if (point->artist == a && point->name = n) {
      return point;
    }
    point = point->next;
  }
  return point;
}
/*struct node * free_list(struct node * n) {
  struct node *output = n;
  struct node *point = n;
  while (point != NULL) {
    output = point->next;
    free(point);
    point = output;
  }
  return point;
}

struct node * remove_num(struct node *front, int data) {
  if (front->num == data) {
    struct node *pointer = front->next;
    free(front);
    return pointer;
  }
  if (front->next == NULL) {
    return front;
  }
  struct node *point = front;
  while (point->next != NULL) {
    if (point->next->num == data) {
      struct node *pointer = point->next;
      point->next = point->next->next;
      free(pointer);
      return front;
    }
    point = point->next;
  }
  return front;
}*/


//chris's funcs
struct song_node * find_first_song(struct song_node * l, char a) {
  struct song_node * point = l;
  while (point->next != NULL) {
    if (point->artist == a) {
      return point;
    }
    point = point->next;
  }
  return point;
}
struct song_node * rand_song(struct song_node * l) {
  struct song_node * point = l;
  int total = 0;
  while (point->next != NULL) {
    total++;
    point = point->next;
  }
  point = l;
  int randNum = rand() % total;
  for (int i = 0; i < randNum; i++) {
    total++;
    point = point->next;
  }
  return point;
}
struct song_node * remove_song(struct song_node * l, struct song_node * rem) {
  if (l == rem) {
    struct song_node *pointer = l->next;
    free(l);
    return pointer;
  }
  if (l->next == NULL) {
    return l;
  }
  struct song_node *point = l;
  while (point->next != NULL) {
    if (point->next == rem) {
      struct song_node *pointer = point->next;
      point->next = point->next->next;
      free(pointer);
      return l;
    }
    point = point->next;
  }
  return l;
}
struct song_node * free_list(struct song_node * l) {
  struct song_node *output = l;
  struct song_node *point = l;
  while (point != NULL) {
    output = point->next;
    free(point);
    point = output;
  }
  return point;
}
