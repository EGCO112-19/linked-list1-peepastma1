#include<stdio.h>
#include<stdlib.h>
#include "linkedlist.h"


int main(int argc, char **argv){
Lnode *head=NULL;

int i,id,score;
argv++;
while(*argv){
  id=atoi(*argv);
  if(id!=0 && *(argv+1))
      {
        score=atoi(*(argv+1));
        printf("Inserting %d:%d\n",id,score);
        head=insert(head,id,score);
        argv+=2;
      }
  else{
       break;
      }
}
  printf("\n\n");
  printlist(head);
  Find_avg(head);
  freeLnode(head);
  printf("\n--------------END--------------");
  printf("\n\n");
  return 0;
}
