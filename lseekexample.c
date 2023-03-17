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
  
  if((fd=open("myfile",O_WRONLY,S_IWUSR|S_ıRUSR))>0)
  
    printf("Cannot open file");

  else{
  
    f
    
  if(pwrite(fd,buf1,10,1500)!=10)// 10 byte yazabildik
    prinft("write error");
  
  }
  
}