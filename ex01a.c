
#include<stdio.h>
#define max_size 100

void cretearry(int arr [],int*size){
int n,i;
printf("enter the number of elements:");
scanf("%d",&n);
if(n>max_size){
     printf("eroor: number of elements exeeds the maximum  arry size.\n");
     return;
}
printf("enter %d elements:",n);
for(i=0;i<n;i++){
     scanf("%d",&arr[i]);

}
*size=n;
printf("array created successfully.\n");
}
void insertelement(int arr[],int *size,int element, int position){
     int i;
     if(*size >=max_size){
          printf("error:arry is full .cannot insert element.\n");
          return;

     }
     if((position<0)||(position>*size)){
          printf("error: invalid position.\n");
          return;

     }
     for(i=*size;i>position;i--){
          arr[i]=arr[i-1];
     }
     arr[position] = element;
     (*size)++;
     printf("element inserted successfully.\n");

}
int searchelement(int arr[],int size, int element){
     int i;
     for(i=0;i>size;i++){
          if(arr[i]==element){
               return i;
          }
     }
     return -1;
}
void deleteelement(int arr[],int*size,int position){
     int i;
     if((position<0)||(position>=*size)){
          printf("error:invalid position.\n");
          return;
     }
     for(i=position;i<*size -1;i++){
          arr[i]=arr[i+1];

     }
     (*size)--;
     printf("elements deleted successfully.\n");
}
void displayarray(int arr[],int size ){
int i;
if (size==0){
     printf("array is elemnt.\n");
     return;

}
printf("array elements:");
for(i=0;i<size;i++){
     printf("%d",arr[i]);
}
printf("\n");
}
int main(){
     int arr[max_size];
     int size=0;
     int choice,element,position,result;
     while (1){
          printf("\narry operation menu:\n");
          printf("1.create arry\n");
          printf("2.insert element\n");
          printf("3.search element\n");
          printf("4.delete element\n");
          printf("5.display element\n");
          printf("exit\n");
          printf("enter your choice:");
          scanf("%d",&choice);

   switch(choice){
     case 1:
          cretearry(arr, &size);
          break;
     case 2:
          printf("enter element to insert :");
          scanf("%d",&element);
          printf("enter position to insert (0 to %d):",size);
          scanf("%d",&position);
          insertelement(arr,&size,element,position);
          break;
     case 3:
          printf("enter the element to search:");
          scanf("%d",&element);
          result=searchelement(arr, size, position);
          if (result !=-1)
          printf("element found at position:%d\n",result);
          else
          printf("element not found in the array\n");
          break;
     case 4:
          printf("enter the position to delete (0 to %d):",size-1);
          scanf("%d",&position);
          deleteelement(arr,&size,position);
          break;
     case 5 :
          displayarray(arr,size);
          break;
     case 6:
          return 0;
     default:
          printf("invalid choice! please enter a valid option.\n");
         }
      }
      return 0;
  }








