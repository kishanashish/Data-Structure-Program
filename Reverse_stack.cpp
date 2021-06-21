 #include<iostream>
#include<string.h>
#include<stack>			
using namespace std;
void Reverse(char *p);
int main()
{
	char string[] = "KishanAshish";
	Reverse(string);
	printf(" %s",string);	
	return 0;
}
void Reverse(char *p)
{
	stack<char> S;
	for(int i=0; i<strlen(p); i++)		
				S.push(p[i]);
	for(int i=0; i<strlen(p); i++)
	{
		p[i] = S.top();
		S.pop();
	}
}

