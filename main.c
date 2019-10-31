#include "linkedlist.h"

int main() {
  struct song_node *a = NULL;
  a = insert_front(a,"La Villa Strangiato","Rush" );
  print_list(a);
  return 0;
}
