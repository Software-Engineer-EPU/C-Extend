/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout
int top = -1;
int capacity = 1;
bool IsEmpty ()
{
	if (top == -1) return true; else return false;
}
bool IsFull(int capacity)
{
	if (top >= capacity - 1) return true; else return false;
}
void push(int stack[], int value, int capacity)
{
	if (IsFull(capacity)) return;
	else
	{
		top++;
		stack[top] == value;
	}
}

void Pop()
{
    if (IsEmpty()) return; else --top;
}

int Top(int stack[])
{
    return stack[top];
}

int main()
{
	freopen(fi);
	freopen(fo);
	ios_base :: sync_with_stdio (0);
	cin.tie(0);
	
    
}