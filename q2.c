#include<stdio.h>
#include<stdlib.h>
struct Product{
    char Item[20];
    int  Quantity;
    float Price;
};

struct BillDetails{
    int discount;
    float grandTotal;
    float discountedValue;
};
struct BillDetails bill;

struct BillDetails BillCalaculator(float total){
    if(total>=1000 && total<=2500){
        bill.discount=5;
        bill.discountedValue=0.05*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
    }
    
}
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
    float total=0.00;
   printf("             *****  Vivek Store ***** \n");
   printf("Item |    QUANTITY |  PRICE | Sub-Total  \n");
   for (i = 0; i < 2; i++){
        printf("%s  |   %-15d   |     %-f   |       %-5f   \n", pointer[i]->Item, pointer[i]->Quantity, 
        pointer[i]->Price ,pointer[i]->Quantity*pointer[i]->Price);
        total+=pointer[i]->Quantity*pointer[i]->Price;
   }
   printf("The Total Price %.2lf", total);
   printf("discount value %d", BillCalaculator(total).discount);
     printf("--------------------------------------------------------------\n");  
     
    

   
    
    
    
    
}

int main(){
    
    
  ScanProducts(2);
   

  
}
