
#include <stdio.h>

struct mystruct {
  
  int id1;
  int id2;
};

int main()
{

 FILE *f;
 //char buffer[50];
 int k;
 struct mystruct s[4];
 
 f = open("myfile","rw+");//hem read hem right için rw+ dosya varsada üzerine yaz
 k = fread(s,sizeof(struct mystruct),4,f);//ben bu dosyadan 10 byte okumak istiyorum. buffer en başına 2 denemede 10 byte okuyup bir tane daha 10 byte okuyor.
 //fread=(buffer,10,2,f);// 10 10 ar okuyacak
 fclose(f);
 printf("Num:%d\n",k);
 
}
//5.9 Section


