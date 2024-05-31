#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}
bool isEmpty() {
   return itemCount == 0;
}
bool isFull() {
   return itemCount == MAX;
}
int size() {
   return itemCount;
}  
void Enqueue(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
}

int Dequeue() {
   int data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}

int main() {
   Enqueue(3);
   Enqueue(5);
   Enqueue(9);
   Enqueue(1);
   Enqueue(12);

	
   if(isFull()) {
      printf("Queue is full!\n");   
   }

   printf("Element removed: %d\n",Dequeue());
   
   Enqueue(16);
   Enqueue(17);

   printf("Element at front: %d\n",peek());
	
   while(!isEmpty()) {
      int n = Dequeue();           
      printf("%d ",n);
   }   
}