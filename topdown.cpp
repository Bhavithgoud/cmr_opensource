#include<stdio.h>
#include <stdlib.h>
void match(char);
char l; void f();
void E(); void E1();
void t(); void T1();
int main(){
    printf("Enter String\n");
    l=getchar(); E();
    if(l=='$'){ printf("Given string is accepted\n"); }
        else{ printf("Given string is  not accepted\n"); }
    }
    void match(char c){
        if(l==c){ l=getchar(); }
    else{ printf("Invalid Input\n");
    exit(0); }
    }
    void f(){
        if(l=='('){
            match('(');
            E();
            if(l==')')match(')');
            }
            else{
            if(l=='i')match('i');
            if(l=='d') match('d');
        }
    }
    void T1(){
        if(l=='*'){
            match('*'); f(); t();
        }
        else{ return; }
    }
    void t()
    {
        f(); T1();
    }
    void E1()
    {
        if(l=='+'){
            match('+'); t(); E1();
        }
        else{ return; }
    }
    void E()
    {
        t(); E1();
    }
