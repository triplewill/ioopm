#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  
int main(int argc, char *argv[]){
  
  // Prints welcome text/ASCII-art
  print_welcome_text(argc, argv);
  
  // Read the input file
  read_input_file(argv[1]);
  
  // Main loop
  main_loop();
  return 0;
}