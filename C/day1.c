/*
Trolls are attacking your comment section!

A common way to deal with this situation is to remove all of the vowels from the trolls' comments, neutralizing the threat.

Your task is to write a function that takes a string and return a new string with all vowels removed.

For example, the string "This website is for losers LOL!" would become "Ths wbst s fr lsrs LL!".*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>

void process_comment(char* I){
if (strlen(I)>0 && I[strlen(I)-2=='\n']){I[strlen(I)-2]='\0';} //replaces the newline line character with \0

for(int i=0;I[i]!='\0';){
    char c=tolower(I[i]); 

    if (c=='a' || c=='i' || c=='e' || c=='o' || c=='u'){
        for(int ii=i;I[ii]!='\0';ii++){ I[ii]=I[ii+1];} }
    else{i++;}}
}

int main(){
    char comment[200];
    printf("Enter the comment: ");
    fgets(comment,200,stdin);

    process_comment(comment);
    printf("The processed comment is: '%s'",comment);
}
