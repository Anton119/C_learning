#include <stdio.h>
#include <stdlib.h>

int s_len(char* string);
char* conc(char* s1, char* s2);
int main() {

char* s1 = "abc";
char* s2 = "de";

printf("%s", conc(s1, s2));

return 0;     
}

int s_len(char* string){

for(int i=0; ;i+=1){

   if (string[i]=='\0') {
       return i;
   }

}
}

char* conc(char* s1, char* s2) {

int total_l = s_len(s1)+s_len(s2);
char* res = malloc(total_l);
for(int i=0;i<=s_len(s1);i+=1) {
    res[i] = s1[i]; 
}       
for(int i=s_len(s1);i<=total_l;i+=1) {
    res[i] = s2[i-s_len(s1)];    
}

    return res;

}