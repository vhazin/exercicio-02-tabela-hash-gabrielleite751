#include <stdio.h>
#include <stdlib.h>

int main() {
  int *hash;
  int *chav;
  int test;
  
  scanf("%d",&test);
  int x, y;
  
  for (int i=0; i<test; i++) {
     scanf(" %d %d",&x,&y);
    chav = malloc(y * sizeof (int));
    hash = malloc(y * sizeof (int));
   
   for (int j=0; j < y; j++) {
      scanf("%d",&chav[j]);
      hash[j] = chav[j] % x;
    }
    
    for (int j=0; j < x; j++) {
      printf("%d -> ",j);
      for (int k=0; k < y; k++) {
        if (hash[k] == j) {
          printf("%d -> ",chav[k]);
        }
      }
    printf("\\\n");
    }
 if (i < test - 1) {
      printf("\n");
    }
  }
  return 0;
} 
