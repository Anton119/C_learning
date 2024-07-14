#include <stdio.h>
#include <stdlib.h>

/*1. функция is_substring("abc","qwabc42") возвращает 1, если первая строка является подстрокой второго аргумента и 0, если не является.
*/

int is_substring(char* s1, char* s2);
int s_len(char* s);

int main () {

char* s1 = "abc";
char* s2 = "qwabc42";
printf("%d", is_substring(s1, s2));

return 0;
}

int s_len(char* s){
for(int i=0; ;i+=1) {
    if (s[i] == '\0') {
        return i;
    }
}

}


int is_substring(char* s1, char* s2) {

for(int i=0; i<=s_len(s1); i+=1) {
    for (int j=0; j<=s_len(s2); j+=1) {
        if(s1[i] == s2[j]) {
        return 1;
        }
    }

}
return 0;
}