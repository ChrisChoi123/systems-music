#include "linkedlist.h"

int main() {
  struct song_node *a = NULL;
  a = insert_front(a,"La Villa Strangiato","Rush" );
  a = insert_front(a,"The Trees","Rush" );
  a = insert_front(a,"Visions","Haken" );
  //print_list(a);
  a = insert_ordered(a, "The Truth Will Set You Free", "The Flower Kings");
  a = insert_ordered(a, "Stardust We Are", "The Flower Kings");
  a = insert_ordered(a, "Garden of Dreams", "The Flower Kings");
  a = insert_ordered(a,"Celestial Elixir","Haken" );
  a = insert_ordered(a,"The Architect","Haken" );
  a = insert_ordered(a,"Dystopian Overture","Dream Theater" );
  a = insert_ordered(a,"As I Am","Dream Theater" );
  a = insert_ordered(a,"The Remembering","Yes" );
  print_list(a);
  return 0;
}
