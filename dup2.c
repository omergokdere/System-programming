//ikisininde yazdıkları engellenmesin diye pread pwrite fonksiyonları kurulmuş
//directory açma kapama argumanla
/* Constant	Reference position
SEEK_SET	Beginning of file
SEEK_CUR	Current position of the file pointer
SEEK_END	End of file */

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
  
  if((fd=open("myfile",O_WRONLY,S_IWUSR|S_IRUSR)) < 0)//dosyayı açtık 0 gösteriyor 
  
    printf("Cannot open file");

  else{
  //0 dup yaptın 1 verdi 0 olduğu file table gösteriyor dup
   
    
  //  fd2 = dup2(fd,1000);//0 fd2 açtığında 0 oluyor. 1000 file_desc 300 de yazılabilir herhangi bir değer.
      
//    printf("Read:%d\n", fd2);
    
      fd2 = dup2(fd,0);//stdin
      fd2 = dup2(fd,1);//stout
      fd2 = dup2(fd,2);
      
      if(fd>2)
      close(fd);
      printf("Hello world");
    /*write(fd2, buf1, 10);
   
    lseek(fd, 0, SEEK_SET);//en başına git 0 aldık
    
    read(fd,buf2,10);//buf2 yazdırdığımızda küçük harfleri yazdırıyor bu yüzden

    printf("Read:%s\n", buf2);*/
  //stand import tan aldığını stand output yazan programı yazınız.
  }
  
}