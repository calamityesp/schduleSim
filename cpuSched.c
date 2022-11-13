#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define BUFFERSIZE 120
#define MAX 6


typedef struct pcb 
{
    int pid;
    char *message;
}process_t;


/*
    Queue Implementation 
*/

process_t pcbArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;


process_t peek() {
   return pcbArray[front];
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


void insert(process_t data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      pcbArray[++rear] = data;
      itemCount++;
   }
}


process_t removeData() {
   process_t data = pcbArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   return data;  
}




void printData(process_t *processData)
{
    printf("Testing: %s", processData->message);
}









int main (int argc, char * argv[])
{
    process_t process;
    process_t *pProcess = &process;
    pProcess->message = (char *) malloc(BUFFERSIZE * sizeof(char));
    pProcess->message = "This is a message"; 

    int quantiumNumber = -1;
    char quantiumSize[4];

    printf("Enter quantum number: ");
    fgets((char *)&quantiumSize, sizeof(quantiumSize), stdin);
    quantiumNumber = atoi((char *) quantiumSize );
    printf("You entered the quantium size of %i\n", quantiumNumber);


    //read fdata from files
    //store data into structure
    //

    printData(pProcess);

    for (int i = 0; i < 5; i++)
    {
        process_t newProcess = {i, "Some data"};
        insert(newProcess);
        printf("Number of elements in queue %d\n", size());
    }
    return 0;

}











