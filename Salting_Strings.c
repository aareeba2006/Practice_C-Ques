#include<stdio.h>
#include<string.h>

int main(){
    char password[100];
    scanf("%s" , password);
    char newpass[200];
    char salt[]="123";
    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);

     return 0;

}