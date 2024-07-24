#include <stdio.h>
#include <stdlib.h>

//2. функция is_beginning("abc","abcdef") 
//возвращает 1, если первая строка является началом второй строки 
//и 0 в противном случае

int is_beginning(char* s1, char* s2);
int s_len(char* s);

int main () {
    char* s1 = "abcf";
    char* s2 = "abcdef";
    //printf("%s", s1);
    printf("%d", is_beginning(s1, s2));
    return 0;
}

int s_len(char* string) {

for(int i=0; ;i+=1){

   if (string[i]=='\0') {
       return i;
   }

}
}

int is_beginning (char* s1, char* s2) {
    for(int i=0; i<s_len(s1); i++){
	if(s1[i]!=s2[i]){
	    return 0;
	    }
    }
    return 1;
}

