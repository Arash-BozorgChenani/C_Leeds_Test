#include <stdio.h>
int main(){
  // Exe. 6: Array Concatenation
   int arr1[3]={1,2,3};
   int arr2[3]={4,5,6};
   int arr3[6];
   for (int i=0;i<3;i++){
    arr3[i]=arr1[i];
    arr3[i+3]=arr2[i];
   }
   printf("arr3 is:\n");
   for (int i=0;i<6;i++){
    printf("%d \n",arr3[i]);
   }


  // Exe. 5: Duplicate Elements
 //   int arr[6]={1,2,3,4,4,5};
 //    for(int i=0;i<6;i++){
 //      for (int j=i+1;j<6;j++){
 //       if (arr[i]==arr[j]){
 //         printf("The duplicate is: %d\n", arr[i]);
 //       }
 //      } 
 //    }

 // Exe. 4: Array Rotation
 //   int arr[5]={1,2,3,4,5}; 
 //   int last=arr[4];
 //   for (int i=4;i>0;i--){
 //     arr[i]=arr[i-1];
 //   } 
 //   arr[0]=last;
 //  for (int i=0;i<5;i++) {
 //     printf("%d\n",arr[i]);
 //  }




  // Exe. 3: Maximum Element
 //   int arr[5]={1, 4, 2, 9, 5};
 //   int max=arr[0];
 //   for (int i=0;i<5;i++){
 //     if(max<arr[i]){
 //         max=arr[i];
 //     }
 //   }
 //   printf("Here is the max: %d\n",max);

 // Exe.2: Array Reverse   
 //  int Array[]={1,2,3,4,5}, temp=0;
 //  for (int i=0;i<4;i++){
 //   temp=Array[i];
 //   Array[i]=Array[4-i];
 //   Array[4-i]=temp;
 //  }
 //  for (int i=0;i<5;i++){
 //  printf("%d \n",Array[i]);
 //  }

 // Exe.1: Array Sum
 //  int Array[]={1,2,3,4,5}, sum=0;
 //  for(int i=0;i<5;i++){
 //     sum+=Array[i];
 //  }
 //  printf("The sum is %d \n",sum);
  return 0;
 }