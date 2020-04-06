/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout
 
void Enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is full
        printf("OverFlow\n");
    else {
        queue[rear] = element;    // Add the element to the back
        rear++;
    }
}
 
 
void Dequeue(char queue[], int& front, int rear) {
    if(front == rear)            // Queue is empty
        printf("UnderFlow\n");
    else {
        queue[front] = 0;        // Delete the front element
        front++;
    }
}
 
char Front(char queue[], int front) {
    return queue[front];
}
 
 
int main()
{
    freopen(fi);
    freopen(fo);
    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    
    char queue[20] = {'a', 'b', 'c', 'd'};        
    int front = 0, rear = 4;                
    int arraySize = 20;                // Size of the array
    int N = 3;                    // Number of steps
    char ch;
    for(int i = 0;i < N;++i) {
        ch = Front(queue, front);
        Enqueue(queue, ch, rear, arraySize);
        Dequeue(queue, front, rear);
    }
    for(int i = front;i < rear;++i)
        printf("%c", queue[i]);
    printf("\n");
    return 0;
}