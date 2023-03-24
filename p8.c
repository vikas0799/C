#include <stdio.h>
#include<string.h>
int main() {
        char s[100];   
        scanf("%s", s);
        int n=strlen(s);
        int  b1=0,b2=0,b3=0,b4=0,b5=0;
        if(n>=8)
         b1=1;
        
        for(int i=0;i<n;i++)
        {

            char ch=s[i];
            if(ch>='a'&&ch<='z')
            b2=1;
            if(ch>='A'&&ch<='Z')
             b3=1;

            if(ch>='0'&&ch<='9')
             b4=1;

            if(ch=='@'||ch=='#'||ch=='&'||ch=='?'||ch=='%')
             b5=1; 
        }

        if((b1==1)&&(b2==1)&&(b3==1)&&(b4==1)&&(b5==1))
        printf("valid password");
        else
        printf("Invalid password");
    }
 
