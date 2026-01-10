#include <stdio.h>
#include <string.h>
int main() {
      
      char ch[100];
      fgets(ch,100,stdin);

      char revch[100];
      
      for(int i=strlen(ch)-1; i>=0; i--) {
        printf ("%c" ,ch[i]);
      }
   //printf("%s", revch);
      return 0;
}