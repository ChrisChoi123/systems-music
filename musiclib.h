#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedlist.h"
//sam
struct song_node * add_song(struct song_node * l, char *n,char * a);
struct song_node * search_song(struct song_node * l, char * n, char * a);
struct song_node * search_artist(struct song_node * l, char * n, char * a);
struct song_node * print_letter(struct song_node * l, char a);
//chris
void print_artist(struct song_node * l, char * a);
void print_lib(struct song_node * l);
struct song_node * shuffle(struct song_node * l, int num);
struct song_node * delete_song(struct song_node * l, struct song_node * rem);
struct song_node * clear_lib(struct song_node * l);
