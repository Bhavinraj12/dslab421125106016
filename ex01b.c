#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struck node*next;

};
struct node*createnode(int data ){
    struct node* newnode = (struck node*)malloc(sizeof(struct node));
    if(newnode == null){
        fprintf(stderr,"memory allocation failed\n");
        exit(exit_failure);
    }
    newnode->data = data;
    newnode->next = null;
    return newword;
}
void insertatend(struct node**head,int data){
    struct node* newnode=createnode(data);
    if(*head == null){
        *head = newnode;
        return;

    }
    struct node *team =*head;
    while(temp->next !=null){
        temp = temp->next;

    }
    temp->next = newnode;
}
void insertatposition(structnode**head,int data,int position){
    if(position<){
        printf("enter: invalid position.\n");
        return;

    }
    struct node*newnode=createnode(data);
    if (position==0){
        newnode->next=*head;
        *head=newnode;
        returm;

    }
    struct node*current =*head;
    struct node*previous=null;
    int currenrpos=0;
    while((current !=null)&&(currenr<position)){
        previous=current;
        currenr = currenr->next;

    }
    if(currenrpos !=position){
        print("error:invalid position.\n");
        free(newnode);
        returm;

    }
    newnode->next=current;
    privious->next=newnode;

}
int searchelemet(struct node **head,int data){
    struct node*temp=*head;
    int position =0;
    while(temp!=null){
        if(team->data==data){
        return position;
    }
    temp=temp->next;
    position++;

    }
    return -1;
}
void deleteelement(struct node**node,int position){
    if(*head==null{
        printf("error;list is empty.\n");
        return -1;

    }
    if(position<0) {
        print("error:invalid position.\n");
        return;
    }
    struct node* temp*head;
    if (position==0){
        *head=temp->next;
        return;

    }
    struct node* previous=null;
    int currenrpos=0;
    while(temp !=null&&currentpos<position){
        previous = temp;
        temp=temp->next;
        currentpos++;

    }
    if(temp==null){
        printf("error:invalid position.\n");
        return;

    }
    previous->next=temp->next;
    free(temp);

}
void displaylist(struct node*head){
    if(head==null){
        printf("list is empty.\n");
        temp=temp->next;

    }
    printf("null\n");

}
int main (){
    struct node* head = null;
    int choice,data,position,result;
    while(1){
        printf("\n single linked list opertions menu:\n");
        printf("1. insert at end \n");
        printf("2.insert at position\n");
        printf("3.search element\n");
        printf("4.delete element\n");
        printf("5.diplay list\n");
        printf("6.exit\n");
        printf("enter your choice:");
            scanf("%d,&choice");
            switch(choice){
            case 1 :
            printf("enter data to insert at end:");
            insertarend(&head,data);
            break;
            case 2:
            printf("enter data to insert:");
            scanf((%"d"),&data);
            printf("enter position to insert (0-based index):");
            scanf("%d",&position);
            insertatposition(&head,data,position);
            break;
            case 3:
            printf("enter element to search:");
            scanf("%d",&data);
            result=searchelement(&head,data);
            if(result != -1)
            printf("element found at position :%d\n",result);
        else
        printf("element not found in the list\n");
    break;
    case 4:
    printf("enter position of delete (0- based index):");
    break ;
    case 5 :
    displaylist(head);
    break;
    case 6 :
    while (head!= null){
        struct node*temp=head;
        head = head->next;
        free(temp);

    }
    return 0;
    default:
    printf("invalid choice! please enter a valid option.\n");


       }
    }
   return 0 ;
}


