#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
//chris
void add_song(struct song_node ** l, char *n,char * a);
struct song_node * search_song(struct song_node ** l, char * n, char * a);
struct song_node * search_artist(struct song_node ** l, char * a);
void print_letter(struct song_node ** l, char a);
void print_artist(struct song_node ** l, char * a);
void print_lib(struct song_node ** l);
void shuffle(struct song_node ** l, int num);
void delete_song(struct song_node ** l, struct song_node * rem);
void clear_lib(struct song_node ** l);
