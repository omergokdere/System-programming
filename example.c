#include <stdio.h>
#include <fcntl.h>

char buf1[]="abcdefghij";
char buf2[]="abcghij";

//fcntl
/*read write open */
int main(void){
  

  int fd;


  if((fd = open("myfile",O_WRONLY|O_CREAT|O_TRUNC,S_IWUSR|S_IRUSR)) < 0)

  printf("Cannot open file");
  
else

  if(write(fd,buf1,10)!=10)

  printf("buf1 Write error");

else

  if(lseek(fd,16384,SEEK_SET)==-1)

  printf("Seek error");

else

  if(write(fd,buf2,10)!=10)
  printf("buf2 Write error");
  
  
}
  
