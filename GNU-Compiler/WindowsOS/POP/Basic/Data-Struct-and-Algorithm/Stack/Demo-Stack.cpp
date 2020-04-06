/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout


int top = -1;
 
bool IsFull(int capacity)
{
    if (top >= capacity - 1) return true; else return false;
}
 
bool IsEmpty()
{
    if(top == -1) return true; else return false;
}
 
void Push(int stack[], int value, int capacity)
{
    if (IsFull(capacity) == true) cout << "Stack is full. Overflow condition!" << endl;
    else
    {
        ++top;
        stack[top] = value;
    }
}
 
void Pop()
{
    if (IsEmpty()) cout << "Stack is empty. Underflow condition!" << endl; else --top;
}

int Top(int stack[])
{
    return stack[top];
}
 
int Size()
{
    return top + 1;
}
int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);
    
    int capacity = 3; 
    int top = -1; 
    int stack[capacity];
    
    // pushing element 5 in the stack .
    Push(stack, 5, capacity); 

    cout << "Current size of stack is " << Size() << endl;
    
    Push(stack, 10, capacity);
    Push(stack, 24, capacity);
    
    cout << "Current size of stack is " << Size() << endl;
    
    // As the stack is full, further pushing will show an overflow condition.
    Push(stack, 12, capacity); 
    
    //Accessing the top element
    cout << "The current top element in stack is " << Top(stack) << endl;
    
    //Removing all the elements from the stack
    for(int i = 0 ; i < 3;i++) Pop();
    cout << "Current size of stack is " << Size() << endl;
    
    //As the stack is empty , further popping will show an underflow condition.
    Pop();  
}