//Jasper Cheung
//Systems pd5
//HW06: Enlist your C skillz
//2017-10-15

#include<stdio.h>
#include<stdlib.h>

struct node {
  int i;
  struct node *next;
};

void print_list(struct node *);
struct node * insert_front(struct node *, int);
struct node * free_list(struct node *);

void print_list(struct node * lizto){
  while( lizto ){
    printf("%d ", lizto -> i );
    lizto  = lizto -> next;
  }
  printf("\n");
}


struct node * insert_front(struct node * geezer, int baby){
  struct node * who_dat;
  who_dat = (struct node *) malloc(sizeof(struct node));
  who_dat -> i = baby;
  who_dat -> next = geezer;
  return who_dat;
}

struct node * free_list(struct node * lizto){
  
  while( lizto ){
    
    struct node * ding = lizto;
    lizto  = lizto -> next;
    free(ding);
    ding = NULL;
  }
  return  lizto;
}
int main(){
  struct node * list;

  list = insert_front(list, 0);
  printf("Should be 0: \n");
  print_list(list);

  
   for(int i = 1; i< 11; i++){
    list = insert_front(list, i);
   }
    

  printf("All data in list: \n");
  print_list(list);

  list = free_list(list);
  printf("\nFreed list \n"); 
  print_list(list);
 
}

    
 
