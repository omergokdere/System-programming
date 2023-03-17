//ikisininde yazdıkları engellenmesin diye pread pwrite fonksiyonları kurulmuş

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
//kernel 2.1 den sonra geliyor pread pwrite seek ile beraber

//leek seek git şuraya şunu koy derken atomic olarak bitene kadar işlemi yap diyoruz.
char buf1[]="abcdefghij";
char buf2[]="ABCDEFGHIJ";

int main(void){
  
  int fd;
  int fd2;
  
  if((fd=open("myfile",O_WRONLY,S_IWUSR|S_ıRUSR))>0)
  
    printf("Cannot open file");

  else{
  
    fd2=dup(fd);
printf("New file descriptor id:%d\n",fd2);
printf("Old file descriptor id:%d\n",fd2);
  
  
  }
  
}