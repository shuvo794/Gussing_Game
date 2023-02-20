#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
    srand(time(0));
    int hidden =rand()%100+1;
    printf("%d",hidden);

    while(true){
      int gucses;
      scanf("%d",&gucses);

      if(gucses==hidden){
        printf("You are win\n");
      }
      else if (gucses<hidden)
      {
        printf("Guscces a lerger");
      }
      




        
    }

    return 0;
}