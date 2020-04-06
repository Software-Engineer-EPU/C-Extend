/* Code by KingNNT */
#include <bits/stdc++.h>
using namespace std;

#define pathio "E:/Code/C-Extend/GNU-Compiler/Test/"
#define fi pathio"input.txt","r",stdin
#define fo pathio"output.txt","w",stdout

struct DataItem
{
    int data;
    int key;
};

void hashcode (int key)
{
    return key % size;
}

DataItem *search(int key){               
   //lấy giá trị hash 
   int hashIndex = hashCode(key);
	
   //di chuyển trong mảng cho tới khi gặp ô trống 
   while(hashArray[hashIndex] != NULL){
	
      if(hashArray[hashIndex]->key == key)
         return hashArray[hashIndex];
			
      //tới ô tiếp theo
      ++hashIndex;
		
      //bao quanh hash table
      hashIndex %= SIZE;
   }
	
   return NULL;        
}

void insert(int key,int data){
   struct DataItem *item = (struct DataItem*) malloc(sizeof(struct DataItem));
   item->data = data;  
   item->key = key;     

   //Lấy giá trị hash
   int hashIndex = hashCode(key);

   //di chuyển trong mảng cho tới khi gặp ô trống hoặc bị xóa
   while(hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1){
      //tới ô tiếp theo
      ++hashIndex;
		
      //bao quanh hash table
      hashIndex %= SIZE;
   }
	
   hashArray[hashIndex] = item;        
}

DataItem* delete(struct DataItem* item){
   int key = item->key;

   //lấy giá trị hash 
   int hashIndex = hashCode(key);

   //di chuyển trong mảng cho tới khi gặp ô trống
   while(hashArray[hashIndex] !=NULL){
	
      if(hashArray[hashIndex]->key == key){
         struct DataItem* temp = hashArray[hashIndex]; 
			
         //gán một phần tử giả tại vị trí bị xóa
         hashArray[hashIndex] = dummyItem; 
         return temp;
      } 
		
      //tới ô tiếp theo
      ++hashIndex;
		
      //bao quanh hash table
      hashIndex %= SIZE;
   }  
	
   return NULL;        
}

int main()
{
    freopen(fi);
    freopen(fo);
    ios_base :: sync_with_stdio (0);
    cin.tie(0);

    
}