#include<stdio.h>

#include <string.h>

#include <ctype.h>

//function definition

int isPalindrome(char str[]){

  //character initialisation 

int left=0;

int right=strlen(str)-1;

//loop runs as long as the pointers don't meet

 while(left < right) {

//convert to lowercase to handle case insensitivity

 if(tolower(str[left]) != tolower(str[right])) {

 return 0;

 //not a palindrome

}

left++;

right--;

}

return 1;

//its a palindrome

}

//main function

int main()
{

char str[100];

printf("Enter a word or phrase:");

fgets(str,sizeof(str),stdin);

//remove newline character if present

str[strcspn(str,"\n")]='\0';

if (isPalindrome(str)){

printf("'%s' is a palindrome.\n",str);

}

else {

printf("'%s' is not a palindrome.\n",str);

}

return 0;
}
