#include "linkedlist.h"

int main() {
  struct song_node *a = NULL;
  a = insert_front(a,"La Villa Strangiato","Rush" );
  a = insert_front(a,"The Trees","Rush" );
  a = insert_front(a,"Visions","Rush" );
  print_list(a);
  //a = insert_ordered(a, "The Truth Will Set You Free", "The Flower Kings");
  //print_list(a);
  return 0;
}
