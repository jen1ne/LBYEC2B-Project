#include <ctime>
#include "header.h"

char* date(){
   time_t t;
   time(&t); //time since january 1, 1970
   
   //Function to track time of each entry
   char *current_time = ctime(&t);

   printf("%s",current_time);
   return current_time;
};
