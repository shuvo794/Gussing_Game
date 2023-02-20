#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int main(){
    srand(time(0));
    int hidden =rand()%100+1;
    printf("%d\n",hidden);

    int gusess_of_number=0;

    while(gusess_of_number < 2){
     
      int gucses;
      scanf("%d",&gucses);

      if(gucses==hidden){
        printf("You are win\n");
        break;
      }
      else if (gucses<hidden)
      {
        printf("Guscces a lerger\n");
      }
      else{
        printf("Guscces a smaller\n");
      }
      gusess_of_number++;
      
}

   if(gusess_of_number == 2){
       printf("You are losser");
   }
     
   return 0;
}