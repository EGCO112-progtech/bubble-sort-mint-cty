// selection sort function module in C

void display(int a[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}


void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(i = 0; i<n-1; i++){
  //printf("ROUND %d\n",i);
  sorted = 0;
  for(j=0;j < n-1-i; j++){
 if(a[j] > a[j+1]){
  swap(&a[j],&a[j+1]);
   sorted = 1;
   }
  display(a,n);
 }
  if(sorted==0) break;
}
  }

