#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
#include "musiclib.h"

void add_song(struct song_node ** l, char *n,char * a) {
  int idx = 0;
  if (a[0] < 97 || a[0] > 122) {
    idx = 0;
  }
  else {
    idx = a[0] - 96;
  }
  l[idx] = insert_ordered(l[idx],n,a);

}

struct song_node * search_song(struct song_node ** l, char * n, char * a) {
  if (a[0] < 97 || a[0] > 122) {
    return find_node(l[0],n,a);
  }
  else {
    int idx = a[0] - 96;
    return find_node(l[idx],n,a);
  }
}

struct song_node * search_artist(struct song_node ** l, char * a) {
  if (a[0] < 97 || a[0] > 122) {
    return find_artist(l[0],a);
  }
  else {
    int idx = a[0] - 96;
    return find_artist(l[idx],a);
  }
}

void print_letter(struct song_node ** l, char a) {
  if (a < 97 || a > 122) {
    print_list(l[0]);
  }
  else {
    int idx = a - 96;
    print_list(l[idx]);
  }
}

void print_artist(struct song_node ** l, char * a) {
  int idx = 0;
  if (a[0] < 97 || a[0] > 122) {
    idx = 0;
  }
  else {
    idx = a[0] - 96;
  }
  struct song_node *point = find_artist(l[idx], a);
  while (strcmp(point->artist,a) == 0) {
    printf(" %s: %s |", point->artist, point->name);
    point = point->next;
  }
  printf("\n");
}

void print_lib(struct song_node ** l) {
  for (int i = 0; i < 27; i++) {
    print_list(l[i]);
  }
}

void shuffle(struct song_node ** l, int num) {
  int tot = num;
  while (tot != 0) {
    for (int i = 0;i < 27;i++) {
      if (rand()%2 == 1 && l[i] != NULL) {
        print_node(rand_song(l[i]));
        tot--;
      }
    }
  }
}

void delete_song(struct song_node ** l, struct song_node * rem) {
  char a = rem->artist[0];
  if (rem == NULL) {
  }
  else if (a < 97 || a > 122) {
    remove_song(l[0],rem);
  }
  else {
    int idx = a - 96;
    remove_song(l[idx],rem);
  }
}

void clear_lib(struct song_node ** l) {
  for (int i = 0;i < 27;i++) {
    free_list(l[i]);
  }
}
