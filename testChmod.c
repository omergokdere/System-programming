
#include <stdio.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>


//S_IRUSR
//S_IWUSR
//S_IXUSR

int main(int argc, char *argv[])

{
  int f;
 // | or layarak yaptığımız için user hakları veriyoruz
  f=open("newfile",O_RDONLY|O_CREAT|O_TRUNC|S_IRUSR|S_IWUSR|S_IXUSR|S_IRGRP);
  close(f);
  
}



