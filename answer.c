//S_IRUSR
//S_IWUSR
//S_IXUSR

//bunları CHMOD için kullanıyoruz.


#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>

 //BIR DIZIN ISMINI PARAMETRE ALıP IÇERIĞINI TÜM DOSYALARı AÇıP STANDARD OUTPUT YAZDıRıN PROGRAMı YAZıNıZ
  //. (nokta işaretiyle) ile bulunduğumuz tüm dosyaları yazdırdık 
int main(int argc, char *argv[])

{
  DIR *directory; //Directory
  struct dirent *dirp;//her bir directorynin pointerı olucak
  int f;
  int n;
  char buf[10];// okuma yazma işleminin yapıldığı yer
  char path[1000];
  strcpy(path,argv[1]);
  int lenght=strlen(argv[1]);
  
  if(path[lenght-1]!='/');//son karakteri kontrol ediyoruz.
  
  {
    path[lenght]='/';
    lenght++;
    
  }
  //printf("%s",path);return;
  directory=opendir(argv[1]);// directory açıp
 
  while((dirp=readdir(directory))!=NULL) // her bir directorynin nulldan farklı ise
  {
      strcpy(&(path[lenght]),dirp->d_name);//son karakterden sonra
      
      f=open(dirp->d_name,O_RDONLY);// d_name dosyanın ismi sadece dosya ismi string fonksiyonları varsa string char string hale getirilmesi 
    
      while((n=read(f,buf,10))>0)//dosyayı açıp kontrol ediyoruz kaç character okuduysa okuyup
     
      write(STDOUT_FILENO,buf,n);// bufferdan standard output yazdırıyoruz
      
      close(f);
  }

}


//stdandard output gelen dosya argüman olarak dosya ismi parametre olarak gelecek standard input yazacak

/*int main(int argc, char *argv[])

{
  
 
  char buffer[100];
 
  int n,f;
  
  f=open(argv[1],O_WRONLY|O_CREAT|O_TRUNC,S_IWUSR|S_IRUSR);
 
 
  while ((n=read(STDIN_FILENO,buffer,10))>0){//n read okuduğu byte döndürüyor nereye buffer nereden stdin_fileno
   
 
    write(f,buffer,n);

  return 0;
  
}
}*/
//./stdinout < myfile > outfile //my file out okuması lazım outfile yazması lazım
/*
int main(void){
  
 char buffer[100];
 int n;
 
 while ((n=read(STDIN_FILENO,buffer,10))>0){//n read okuduğu byte döndürüyor nereye buffer nereden stdin_fileno
   
 write(STDOUT_FILENO,buffer,n);
 
   
}
  
}*/



