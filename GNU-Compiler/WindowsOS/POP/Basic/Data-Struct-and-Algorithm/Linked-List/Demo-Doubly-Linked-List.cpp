/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct node {
   int data;
   int key;
	
   node *next;
   node *prev;
};

node *head = NULL;
node *last = NULL;
node *current = NULL;

bool IsEmpty()
{
    return head == NULL;
}

int Length()
{
    int length = 0;
    struct node *current;

    for(current = head; current != NULL; current = current->next)
    {
        length++;
    }

    return length;
}

void DisplayForward()
{
    struct node *ptr = head;
    cout << endl << " ";
    while(ptr != NULL)
    {        
        cout << ptr -> key << ptr -> data <<  " ";
        ptr = ptr->next;
    }
    cout << " ]";
}

void DisplayBackward()
{
    struct node *ptr = last;
    cout << endl << " ";
    while(ptr != NULL)
    {    
        cout << ptr -> key << ptr -> data <<  " ";
        ptr = ptr ->prev;
    }
    cout << " ]";
}

void InsertFirst(int key, int data)
{

   node *link = new node;
   link->key = key;
   link->data = data;
	
   if (IsEmpty())
   {
      //lam cho no thanh last link
      last = link;
   }
   else
   {
      //cap nhat first prev link
      head->prev = link;
   }

   //tro no toi first link cu
   link->next = head;
	
   //tro first toi first link moi
   head = link;
}

//chen link tai vi tri cuoi cung
void InsertLast(int key, int data){

   //tao mot link
   struct node *link = (struct node*) malloc(sizeof(struct node));
   link->key = key;
   link->data = data;
	
   if (IsEmpty())
   {
      //lam cho no thanh last link
      last = link;
   }
   else
   {
      //lam cho no thanh last link moi
      last->next = link;     
      //danh dau last node la prev cua link moi
      link->prev = last;
   }

   //tro last toi last node moi
   last = link;
}

struct node* DeleteFirst()
{

   //luu tham chieu toi first link
   struct node *tempLink = head;
	
   //neu chi co link
   if (head->next == NULL)
   {
      last = NULL;
   }
   else
   {
      head->next->prev = NULL;
   }
	
   head = head->next;
   //tra ve link da bi xoa
   return tempLink;
}

struct node* DeleteLast()
{
   //luu tham chieu toi last link
   struct node *tempLink = last;
	
   //neu chi co link
   if(head->next == NULL)
   {
      head = NULL;
   }
   else
   {
      last->prev->next = NULL;
   }
	
   last = last->prev;
	
   //tra ve link bi xoa
   return tempLink;
}

//xoa mot link voi key da cho

struct node* DeleteKey(int key){

   //bat dau tu link dau tien
   struct node* current = head;
   struct node* previous = NULL;
	
   //neu list la trong
   if(head == NULL)
   {
      return NULL;
   }

   //duyet qua list
   while(current->key != key)
   {
      //neu no la last node
		
      if(current->next == NULL)
      {
         return NULL;
      }
      else
      {
         //luu tham chieu toi link hien tai
         previous = current;
			
         //di chuyen next link
         current = current->next;             
      }
   }

   //cap nhat link
   if(current == head)
   {
      //thay doi first de tro toi next link
      head = head->next;
   }
   else
   {
      //bo qua link hien tai
      current->prev->next = current->next;
   }    

   if (current == last)
   {
      //thay doi last de tro toi prev link
      last = current->prev;
   }
   else
   {
      current->next->prev = current->prev;
   }
   return current;
}

bool InsertAfter(int key, int newKey, int data){
   //bat dau tu first link
   struct node *current = head; 
	
   //neu list la trong
   if (head == NULL)
   {
      return false;
   }

   //duyet qua list
   while (current->key != key)
   {
	
      //neu day la last node
      if(current->next == NULL)
      {
         return false;
      }
      else
      {           
         //di chuyen next link
         current = current->next;             
      }
   }
	
   //tao mot link
   node *newLink = new node;
   newLink->key = key;
   newLink->data = data;

   if(current == last)
   {
      newLink->next = NULL; 
      last = newLink; 
   }
   else
   {
      newLink->next = current->next;         
      current->next->prev = newLink;
   }
	
   newLink->prev = current; 
   current->next = newLink; 
   return true; 
}

int main()
{
  freopen(fi);
  freopen(fo);
  ios_base :: sync_with_stdio (0);
  cin.tie(0);

  InsertFirst(1,10);
  InsertFirst(2,20);
  InsertFirst(3,30);
  InsertFirst(4,1);
  InsertFirst(5,40);
  InsertFirst(6,56); 

  printf("\nIn danh sach (First ---> Last): ");  
  DisplayForward();

  printf("\n");
  printf("In danh sach (Last ---> first): "); 
  DisplayBackward();

  printf("\nDanh sach, sau khi xoa ban ghi dau tien: ");
  DeleteFirst();        
  DisplayForward();

  printf("\nDanh sach, sau khi xoa ban ghi cuoi cung: ");  
  DeleteLast();
  DisplayForward();

  printf("\nDanh sach, chen them phan tu sau key(4): ");  
  InsertAfter(4,7, 13);
  DisplayForward();

  printf("\nDanh sach, sau khi xoa key(4) : ");  
  DeleteKey(4);
  DisplayForward();
}