#include "linkedlist.h"

int main() {
  struct song_node *a = NULL;
  a = insert_front(a,"La Villa Strangiato","Rush" );
  print_list(a);
  //a = insert_ordered(a, "The Truth Will Set You Free", "The Flower Kings");
  //print_list(a);
  return 0;
}
