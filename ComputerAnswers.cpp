/*
**  Computer Answers
**  Ankit Vadehra
**  31.10.2011
**  9:12 PM
**  Program Summary : Enter answer enclosed in '.' and then enter question to get answer.
**  Example : To get answer 42 type .42. , what will come on screen will be Comp then type the
**            rest of the sentence followed by the question and press enter to get the answer
*/
#include<iostream>
#include<ctype.h>
#include<stdio.h>
using namesapce std;
int main() 
{
    char ans[100],temp,rem[200];
    int len=0,count=0,flag=0;;
    char disp[]={'C','o','m','p','u','t','e','r',',','p','l','e','a','s','e',' ','a','n','s','w','e','r'};
    while(1) 
    {
             temp=getch();
             if(temp=='.') 
             {
                           flag=1;
                           cout<<disp[count++];
                           while(1) 
                           {
                            temp=getch();
                            cout<<disp[count++];
                            if(temp=='.')break;
                            ans[len++]=temp;
                           }
                           gets(rem);
                           break;
             }
             if(temp==13)break;
             cout<<temp;
    }
    cout<<"Enter Question : ";
    gets(rem);
    if(flag) 
    {
     cout<<"Answer is : ";
     for(int i=0;i<len;i++)cout<<ans[i];
     }
     else
     cout<<"I don't answer to idiots!";
   getch();              
}
    
    
