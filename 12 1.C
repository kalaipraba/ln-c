#include <stdio.h>
#include <string.h>
 
#define SIZE 40
 
int main(void)
{
  char buf[SIZE] = "computer program";
  char * ptr;
  int    ch = 'p';
 
 
  ptr = strchr( buf, ch );
  printf( "The first occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
 
  
  ptr = strrchr( buf, ch );
  printf( "The last occurrence of %c in '%s' is '%s'\n", ch, buf, ptr );
getch(); 
}
