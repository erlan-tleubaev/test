#include <stdio.h>
#include <stdlib.h>


unsigned long hash(const char *str){
  unsigned long hash = 5381;
  int c;

  while(c = *str++)
          hash = ((hash << 5)+hash) + c;
  
  
  return hash;
}

int encrypt(int n, const char *key){
  int key_hash = hash(key);
  return n ^ key_hash;
}


int main(int argc, const char *argv[]){
  if(argc != 2){
      printf("Usage : ./enc [key]\n");
      return -1;
  }
  int c;
  const char *input_key = argv[1];
  
  while ((c = getc(stdin)) != EOF){
    int c_enc = encrypt(c, input_key);
    putc(c_enc,stdout);
}

}
