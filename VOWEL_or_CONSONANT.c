#include<stdio.h>
int main()
{
    char c,A,E,I,O,U,a,e,i,o,u;
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}