
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char** argv){
    if (argc != 3){
        write (1, "Incorrect Arguments", 20);
        exit(1);
    }
    char* from = argv[1];
    char* to = argv[2];
    size_t fromLen = strlen(argv[1]);
    size_t toLen = strlen(argv[2]);
    
    if (fromLen != toLen){
        write(1, "Incorrect Lengths" , 17);
        exit(1);
    }
    
   for (int i = 0; i < fromLen; i++){
          for (int j = i+1; j < fromLen; j++){
              if (from[i] == from[j]){
                  write(1, "No duplicates", 13);
                  exit(1);
              }
          }
      }
    
    char c;
    int returnStatus = read(0, &c, 1);
    
    while ( returnStatus != 0){
        
        for (int i = 0; i < fromLen; i++){
                if (from[i] == c){
                    c = (to[i]);
                    break;
                }
            }
        write(1, &c,1);
        returnStatus = read(0, &c,1);
        
    }
}


