#include<iostream.h>
#include<conio.h>
#include<cstdlib>
main( )
{

 FILE *fp;   /* file pointer */
 int i;

 /* open file for output */
 if ((fp = fopen("myfile", "w"))==NULL){
  printf("Cannot open file \n");
  exit(1);
 }
 i=100;

 if (fwrite(&i, 2, 1, fp) !=1){

  printf("Write error occurred");
  exit(1);
 }
 fclose(fp);

 /* open file for input */
 if ((fp =fopen("myfile", "r"))==NULL){
  printf("Read error occurred");
  exit(1);
 }
 printf("i is %d",i);
 fclose(fp);
}

getch( );
}
