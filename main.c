#include "head.h"

int main() {
  struct node *list1 = NULL;
  printf("Printing empty list: \n");
  print_list(list1);
  printf("Adding #'s 0-9 to list.\n");
  for (int i = 0; i < 10; i++) {
    list1 = insert_front(list1,9-i);
  }
  print_list(list1);
  printf("Removing 6: \n");
  list1 = remove_num(list1,6);
  print_list(list1);
  printf("Removing 0: \n");
  list1 = remove_num(list1,0);
  print_list(list1);
  printf("Removing 9: \n");
  list1 = remove_num(list1,9);
  print_list(list1);
  printf("Removing -1: \n");
  list1 = remove_num(list1,-1);
  print_list(list1);
  printf("Freeing the list:\n");
  list1 = free_list(list1);
  print_list(list1);
  return 0;
}
