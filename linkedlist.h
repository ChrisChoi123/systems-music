#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct song_node{
  char name[100];
  char artist[100];
  struct song_node *next;
};

//sam
void print_list(struct song_node * l);
void print_node(struct song_node * l);
struct song_node * insert_front(struct song_node * l, char *n,char * a);
struct song_node * insert_ordered(struct song_node * l, char * n, char * a);
struct song_node * find_node(struct song_node * l, char * n, char * a);
//chris
struct song_node * find_artist(struct song_node * l, char * a);
struct song_node * rand_song(struct song_node * l);
struct song_node * remove_song(struct song_node * l, struct song_node * rem);
struct song_node * free_list(struct song_node * l);
#endif
