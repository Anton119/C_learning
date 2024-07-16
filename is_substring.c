#include <stdio.h>
#include <stdlib.h>

/*1. функция is_substring("abc","qwabc42") возвращает 1, если первая строка является подстрокой второго аргумента и 0, если не является.
*/

int is_substring(char* s1, char* s2);
int s_len(char* s);

int main () {

char* s1 = "abc4";
char* s2 = "qwabc4c2";
printf("%d", is_substring(s1, s2));
//is_substring(s1,s2);

return 0;
}



int is_substring(char* s1, char* s2) {
int i,j;
for(i=0; s2[i]!='\0'; i++) {
    if (s2[i] == s1[0]){
        for(j=0; s1[j]!='\0'; j++) {
            if(s2[i+j] != s1[j]) {
                break;
                }
        }
        if(s1[j] == '\0'){
            return 1;
            }
        }
        
        
    }
return 0;

}