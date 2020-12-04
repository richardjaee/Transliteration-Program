
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv){
    if (argc != 3){
        fprintf(stderr, "Incorrect arguments");
        exit(1);
    }
    
    char* from = argv[1];
    char* to = argv[2];
    
    int fromLen = strlen(from);
    int toLen = strlen(to);
    
    if (fromLen != toLen){//checks if the lengths are not the same
        fprintf(stderr, "Incorrect lengths");
        exit(1);
    }
    
    for (int i = 0; i < fromLen; i++){
        for (int j = i+1; j < fromLen; j++){
            if (from[i] == from[j]){
                fprintf(stderr, "No duplicates allowed");
                exit(1);
            }
        }
    }
    
    char c = getchar();
    while (c != EOF){
        
        for (int i = 0; i < fromLen; i++){
            if (from[i] == c){
                c = (to[i]);
                break;
            }
        }
        putchar(c);
        c = getchar();
    }
}


