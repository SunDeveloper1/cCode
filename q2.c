#include<stdio.h>
#include<stdlib.h>
struct Product{
    char Item[20];
    int  Quantity;
    float Price;
};

void ScanProducts(int n){
    static struct Product *pointer[10];
    int i=0;
    while(n!=0){
      
       
        struct Product *p1;
        p1 = (struct Product*) malloc(sizeof(struct Product));
        printf("Enter the Product Name\n");
        scanf("%s",&p1->Item);
        printf("Enter the Quantity\n");
        scanf("%d",&p1->Quantity);
        printf("Enter the Price\n");
        scanf("%f",&p1->Price);
        n--;
        pointer[i]=p1;
         i++;  
         
        
    }
   printf("             *****  Vivek Store ***** \n");
   printf("S.No.|    NAME     |  QUANTITY   |  PRICE \n");
   for (i = 0; i < 2; i++)
        printf("%d  |   %-15s   |     %-d   |       %-5f   \n", i + 1, pointer[i]->Item, pointer[i]->Quantity, 
        pointer[i]->Price );
     printf("--------------------------------------------------------------\n");        

   
    
    
    
    
}

int main(){
    
    
  ScanProducts(2);
   

  
}