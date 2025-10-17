#include <stdio.h>
#include <stdlib.h>

int encrypt(int n){
  return c ^ 17;
}


int main(int argc, const char *argv[]){
  if(argc != 2){
      printf("Usage : ./enc [key]\n");
      return -1;
  }
  int c;
  while ((c = getc(stdin)) != EOF){
    int c_enc = encrypt(c);
    putc(c_enc,stdout);
}

}
