// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
struct Product{
    char Item[20];
    int  Quantity;
    float Price;
};

struct BillDetails{
    char discount[10];
    float grandTotal;
    float discountedValue;
};
struct BillDetails bill;

struct BillDetails BillCalaculator(float total){
    if(total>=1000 && total<=2500){
        strcpy(bill.discount,"5%");
        bill.discountedValue=0.05*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
    }
    else if(total>=2501 && total<=5000){
        strcpy(bill.discount,"10%");
        bill.discountedValue=0.10*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
    }
    else if(total>=5001 && total<=10000){
        strcpy(bill.discount,"15%");
        bill.discountedValue=0.15*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
    }
    else if(total>=10001){
        strcpy(bill.discount,"20%");
        bill.discountedValue=0.20*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
        
    }
    else{
        strcpy(bill.discount,"0%");
        bill.discountedValue=0*total;
        bill.grandTotal=total-bill.discountedValue;
        return bill;
    }
    
}
void ScanProducts(int n){
    static struct Product *pointer[10];
    int i=0;
    int counter=n;
    char dummy[10];
    
    while(n!=0){
      
       printf("-------------------------------------\n");
        struct Product *p1;
        p1 = (struct Product*) malloc(sizeof(struct Product));
        printf("Enter the Product Name\n");
        getchar();
       fgets(p1->Item, sizeof(p1->Item), stdin);
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
   char Item[]="ITEM";
   char Quantity[]="Quantity";
   char Price[]="Price";
   char Sub_Total[]="Sub-Total";
   
    printf("-------------------------------------------------------\n");
   printf("|%-20s|%-10s|%-10s|%-10s|\n",Item,Quantity,Price,Sub_Total);
   for (i = 0; i <counter; i++){
       strtok(pointer[i]->Item, "\n");
        printf("-------------------------------------------------------\n");
        printf("|%-20s|%-10d|%-10.2f|%-10.2f|\n", pointer[i]->Item, pointer[i]->Quantity, 
        pointer[i]->Price ,pointer[i]->Quantity*pointer[i]->Price);
        total+=pointer[i]->Quantity*pointer[i]->Price;
        
   }
   struct BillDetails billDetails=BillCalaculator(total);
   printf("-------------------------------------------------------\n");
   printf("|%-20s|%-10s %-10s|%-10.2f|\n", "Total","","",total);
   printf("-------------------------------------------------------\n");
   printf("|%-20s|%-10s|%-10s|%-10.2f|\n", "","Discount",billDetails.discount,-billDetails.discountedValue);
   printf("-------------------------------------------------------\n");
   printf("|%-20s|%-10s %-10s|%-10.2f|\n", "GrandTotal","","",billDetails.grandTotal);
   printf("-------------------------------------------------------\n");
   
   
    

   
    
    
    
    
}

int main(){
    
printf("Enter the Number of Items\n");
int n;
scanf("%d",&n);
 ScanProducts(n);
  

  
}
