//Implementation of Stack using Array in c++
#include<iostream>
#include<conio.h>
#define max 5
using namespace std;
int stack[max];
int top=-1;

void push()
{
    int x;
    cout<<"Enter the number:";
    cin>>x;
    if(top==max-1)
    {
    cout<<"The stack is full"<<endl;
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"The stack is empty"<<endl;
    }
    else
    {
        cout<<"The popped element is:"<<stack[top]<<endl;
        top--;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        cout<<stack[i]<<endl;
    }
}
int main()
{
    int choice;
    do
    {
    cout<<"Enter the choice:";
    cin>>choice;
    switch(choice)
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    default:
        cout<<"Exit the program"<<endl;
    }
    }while(choice!=0);
    getch();
    return 0;
}






