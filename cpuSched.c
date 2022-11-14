#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include 

#define BUFFERSIZE 120
#define MAX 6

char *algorithms[3] = {"1) FIFO", "2) SJF", "3) RR"};

typedef struct pcb 
{
    int pid;
    int priority;
    int arrivalTime;
    int CPUburst;
    int IOburst;
    int CPUremainingTime;
    int IOremainingTime;
    int waitingTime;
    int turnaroundTime;
    int responseTime;
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


process_t * readFile(void)
{
    FILE *infile = NULL;
    int lineCount = 0;
}


void fifo_a()
{
    process_t processes[] = readFile();
    //establish the wait queue
    
    //openfile and read all data into an array

    //print process based on the number it has 
}

void printData(process_t *processData)
{
    printf("Testing: %s", processData->message);
}

void printHeader()
{

}









int main (int argc, char * argv[])
{
    char uInputBuff[120];
    int quantiumNumber = -1;
    char quantiumSize[4];
    int algoNum = -1;

    printf("Enter quantum number: ");
    fgets((char *)&quantiumSize, sizeof(quantiumSize), stdin);
    quantiumNumber = atoi((char *) quantiumSize );
    printf("You entered the quantium size of %i\n", quantiumNumber);
    printf("Select the scheduling algorithm you want to run: \n");
    for (int i = 0; i <= 2; i++)
    {
        printf("%s\n", algorithms[i]);
    }
    fgets((char *)uInputBuff, sizeof(uInputBuff), stdin);
    algoNum = atoi((char *) uInputBuff);
    printf("You entered option: %s\n", algorithms[algoNum]);

    switch (algoNum)
    {
    case 1:
        fifo_a();
        break;
    case 2:
        break;
    case 3:
        break;
    default:
        break;
    }

    return 0;

}











