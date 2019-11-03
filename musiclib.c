#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musiclib.h"

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
  
}
