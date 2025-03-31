#include "visual.h"

int main(int argc, char** argv)
{
   if (argc != 2){
      printf("Invalid number of arguments.\n");
      return EXIT_FAILURE;
   }
   test();
   node* root = init_tree(argv[1]);
   print_visual(root);
   free_tree(root);
   return EXIT_SUCCESS;
}
