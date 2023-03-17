
#include <stdio.h>



int main(void){
  
 char buffer[100];
 int i;
 
 while (true){
   
 printf( "Enter a value :");
   
 scanf("%s %d", buffer, &i);

 printf( "\nYou entered: %s %d ", buffer, i);

}
  

  return 0;
}

