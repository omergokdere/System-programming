
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

 chmod("newfile",S_IRUSR,S_IWUSR);
 //-rwxrwxr-x  1 ukantekin ukantekin 8527 Nov  3 09:52 testCmd 
}



