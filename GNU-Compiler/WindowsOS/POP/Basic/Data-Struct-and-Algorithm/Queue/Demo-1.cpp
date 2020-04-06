/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

void Enqueue (int queue[], int value, int rear, int arraySize)
{
    if (rear == arraySize)
    {
        cout << "Overflow" << endl;
        return;
    }
    else
    {
        queue[rear] =  value;
        rear++;
    }
}
bool IsEmpty(int front, int rear)
{
    return (front == rear);
}

void Dequeue (int queue[], int &front, int rear)
{
    if (front == rear)
    {
        cout << "NULL";
        return;
    }
    else
    {
        queue[front] = value;
        front++;
    }
    
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);

    
}