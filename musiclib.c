#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musiclib.h"

struct song_node * add_song(struct song_node * l, char *n,char * a) {
  if (a < 97 || a > 122) {
    return insert_ordered(l[0],n,a);
  }
  else {
    int idx = a - 96;
    return insert_ordered(l[idx],n,a);
  }
}

struct song_node * search_song(struct song_node * l, char * n, char * a) {
  if (a < 97 || a > 122) {
    return find_node(l[0],n,a);
  }
  else {
    int idx = a - 96;
    return find_node(l[idx],n,a);
  }
}

struct song_node * search_artist(struct song_node * l, char * a) {
  if (a < 97 || a > 122) {
    return find_artist(l[0],n,a);
  }
  else {
    int idx = a - 96;
    return find_artist(l[idx],n,a);
  }
}

void print_letter(struct song_node * l, char a) {
  if (a < 97 || a > 122) {
    print_list(l[0]);
  }
  else {
    int idx = a - 96;
    print_list(l[idx]);
  }
}

void print_artist(struct song_node * l, char * a) {
  if (a[0] < 97 || a[0] > 122) {
    struct song_node point = find_first_song(l[0], a);
  }
  else {
    int idx = a[0] - 96;
    struct song_node point = find_first_song(l[idx], a);
  }
  while (strcmp(point->artist,a) == 0) {
    printf(" %s: %s |", point->artist, point->name);
    point = point->next;
  }
  printf("\n");
}

void print_lib(struct song_node * l) {
  for (int i = 0, i < 27; i++) {
    print_list(l[i]);
  }
}

struct song_node * shuffle(struct song_node * l, int num) {
  int tot = num;
  while (tot != 0) {
    for (int i = 0;i < 27;i++) {
      if (rand()%2 = 1) {
        print_node(rand_song(l[i]);
        tot--;
      }
    }
  }
}

struct song_node * delete_song(struct song_node * l, struct song_node * rem) {
  char a = rem->artist[0];
  if (rem == NULL) {
    return l;
  }
  if (a < 97 || a > 122) {
    return remove_song(l[0],rem);
  }
  else {
    int idx = a - 96;
    return remove_song(l[idx],rem);
  }
}

struct song_node * clear_lib(struct song_node * l) {
  struct song_node * point = l;
  for (int i = 0;i < 27;i++) {
    free_list{l[i]};
  }
  return l;
}
