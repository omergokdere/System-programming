#include <stdio.h>
#include <dirent.h>

int main(int argc, char * argv[]){
  
  DIR * dp;
  struct dirent *dirp;
  

  if(argc!=2){
  
    printf("Error. Nedds one argument\n");
    
  }else{
  
 
    if((dp=opendir(argv[1])) == NULL)
  {
    
    printf("Can't open directory %s\n", argv[1]);
  
  }else{
    
    while((dirp = readdir(dp)) != NULL)
    {
      printf("%s\n",dirp->d_name);
    }
  
    closedir(dp);
  }
  
}  
}

