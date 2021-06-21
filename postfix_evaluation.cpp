//WAP for postfix Expression evaluation.

#include<iostream>
#include <stdio.h>
#include <ctype.h>

#define MAXSTACK 100 
#define POSTFIXSIZE 100

using namespace std; 

int stack[MAXSTACK];
int top = -1;
void push(int item)
{

    if (top >= MAXSTACK - 1) {
        cout<<"stack over flow";
        return;
    }
    else {
        top = top + 1;
        stack[top] = item;
    }
}
int pop()
{
    int item;
    if (top < 0) {
        cout<<"stack under flow";
    }
    else {
        item = stack[top];
        top = top - 1;
        return item;
    }
}

void EvalPostfix(char postfix[])
{

    int i;
    char ch;
    int val;
    int A, B;

    for (i = 0; postfix[i] != ')'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
        push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            A = pop();
            B = pop();

            switch (ch) 
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }

            push(val);
        }
    }
    cout<<" \n Result of expression evaluation : \n"<<pop();
}

int main()
{

    int i;

    char postfix[POSTFIXSIZE];
	cout<<" \nEnter postfix expression,\npress right parenthesis ')' "<<endl;
	cout<<"Enter expression : ";


    for (i = 0; i <= POSTFIXSIZE - 1; i++) 
	{
        cin>>postfix[i];

        if (postfix[i] == ')') 
        {
            break;
        } 
    }
    EvalPostfix(postfix);

    return 0;
}

