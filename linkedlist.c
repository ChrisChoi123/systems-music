#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "linkedlist.h"

//sam's funcs
void print_list(struct song_node * l) {
  struct song_node *point = l;
  while (point != NULL) {
    printf(" %s: %s |", point->artist, point->name);
    point = point->next;
  }
  printf("\n");
}

struct song_node * insert_front(struct song_node * l, char *n,char * a) {
  struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
  strcpy(l1->name,n);
  strcpy(l1->artist, a);
  l1->next = l;
  return l1;
}

//chris's funcs
struct song_node * insert_ordered(struct song_node * l, char *n, char *a) {
  struct song_node *point = l;
  if ((strcmp(point->artist, a) == 0) && (strcmp(point->name,n) > 0)) {
    struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
    strcpy(l1->name, n);
    strcpy(l1->artist,a);
    l1->next = point;
    return l1;
  }
  if (strcmp(a,point->next->artist) < 0) {
    struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
    strcpy(l1->name, n);
    strcpy(l1->artist,a);
    l1->next = point;
    return l1;
  }
  while (point->next != NULL) {
    if (strcmp(point->next->artist, a) == 0) {
      while (strcmp(a,point->next->artist) == 0) {
        if (strcmp(n, point->next->name) < 0) {
          struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
          strcpy(l1->name, n);
          strcpy(l1->artist,a);
          l1->next = point->next;
          point->next = l1;
          return l;
        }
        point = point->next;
      }
      struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
      strcpy(l1->name, n);
      strcpy(l1->artist,a);
      l1->next = point->next;
      point->next = l1;
      return l;
    }
    if (strcmp(a,point->next->artist) < 0) {
      struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
      strcpy(l1->name, n);
      strcpy(l1->artist,a);
      l1->next = point->next;
      point->next = l1;
      return l;
    }
    point = point->next;
  }
  struct song_node *l1 = malloc(sizeof(char[100])*2+ sizeof(l1));
  strcpy(l1->name, n);
  strcpy(l1->artist,a);
  l1->next = point->next;
  point->next = l1;
  return l;
}

struct song_node * find_node(struct song_node * l, char * n, char * a) {
  struct song_node * point = l;
  while (point != NULL) {
    if (strcmp(point->artist,a) == 0 && strcmp(point->name,n) == 0) {
      return point;
    }
    point = point->next;
  }
  return point;
}

struct song_node * find_first_song(struct song_node * l, char * a) {
  struct song_node * point = l;
  while (point != NULL) {
    if (strcmp(point->artist,a) == 0) {
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
