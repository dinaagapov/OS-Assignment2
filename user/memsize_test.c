
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char **argv) {
  
    int before = memsize();
    printf("Memory bytes at first: %d\n",before);
    double* p = malloc(20000);
    int afterMalloc = memsize();
    printf("Memory bytes after malloc: %d\n",afterMalloc);
    free(p);
    int afterFree = memsize();
    printf("Memory bytes after free: %d",afterFree);
    exit(0,"");


  return 0;
}