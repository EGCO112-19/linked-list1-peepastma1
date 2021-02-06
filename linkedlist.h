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
      /* ปรับปรุงตรงนี้*/
      t->next =(Lnode*) malloc(sizeof(Lnode));
       /* ปรับปรุงตรงนี้*/
  }
  
  return head;
}


void printlist(Lnode*); // print id, score ให้ครบ
void Find_avg(Lnode*); // คำนวน average  score


#endif /* linkedlist_h */

