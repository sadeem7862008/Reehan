#include <stdio.h>
int main() {
   int i,j,temp,k;
   printf("Enter the value to find the numbers:");
   scanf("%d",&k);
   int a[10]={101,44,83,36,65,9,52,7,1,76};
   for(i=0;i<10;i++){
       for (j=i+1;j<10;j++){
           if(a[j]>a[i]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
    }
    printf("%d largest element;%d\n",k,a[k-1]);
    printf("%d smallest element;%d\n",k,sizeof(a)/sizeof(a[0])-k-1);
    printf("printing the sorted element list..........\n");
    for(i=10;i<10;i++){
    printf("%d\n",a[i]);

}
    return 0;
}