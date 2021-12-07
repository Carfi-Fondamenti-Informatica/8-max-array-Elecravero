#include "lib.h"

float funzione (const int dim, float a[]){
       a[dim];
       float max;
       max= a[0];
       for(int i=0; i<dim; i++){
           if(a[i]>max){
               max=a[i];
           }else if(a[i]==max){
           }
       }
       return max;
   }
