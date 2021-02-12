//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2564 BE.
//

#ifndef linkedlist_h
#define linkedlist_h
struct node
{
    int id,score;
    struct node *next;
};

typedef struct node Lnode;

Lnode* insert(Lnode*head , int id,int score){
  Lnode *t;
  if(head==NULL){
     head=(Lnode*) malloc(sizeof(Lnode));
     head->id=id;
     head->score=score;
     head->next=NULL;
  }
  else {
      t=head;
      while(t->next!=NULL)
      {
        t=t->next;
      }
      t->next =(Lnode*) malloc(sizeof(Lnode));
      t->next->id=id;
      t->next->score=score;
      t->next->next=NULL;
  }
  
  return head;
}


void printlist(Lnode* head)
{
  int student=1;
  Lnode *now;
  now=head;
  while(now!=NULL)
  {
    printf("STUDENT %d ID : %d SCORE : %d\n",student,now->id,now->score);
    now=now->next;
    student++;
  }
}

void Find_avg(Lnode *head)
{
  float sum = 0;
  int count = 0;
  Lnode *now = head;
  while(now!=NULL)
  {
    sum += (now-> score);
    count++;
    now = now -> next;
  }
  printf("\nClass Average Score : %.2f\n",sum/count);
}

void freeLnode(Lnode *head)
{
  while(head != NULL)
  {
    Lnode *now = head;
    head = head -> next;
    free(now);
  }
}

#endif /* linkedlist_h */

