#include <stdio.h>
#include <string.h>
int main() {
    char ch[100];
    fgets(ch,100,stdin);
    for (int i=strlen(ch)-2;i>=0;i--){
        printf ("%c",ch[i]);
    }
    return 0;
}