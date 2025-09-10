#include <stdio.h>
void calculateNum(int arr[],int Num,double* num,int* Max,int* Min);
int main(){
    int Num;
    scanf("%d", &Num);
    int arr[Num]; 
    for (int i = 0;i<Num;i++) {
        scanf("%d", &arr[i]);
    }
    double num;
	int Max, Min;
    calculateNum(arr,Num,&num,&Max,&Min);
    printf("%.2f\n", num);
    printf("%d\n", Max);
    printf("%d\n", Min);
    return 0;
}
void calculateNum(int arr[],int Num,double* num,int* Max,int* Min){
    *num = 0;
    *Max = arr[0];
    *Min = arr[0];
    for(int i = 0;i<Num;i++){
        *num += arr[i];
        if(arr[i] > *Max) *Max = arr[i];
        if(arr[i] < *Min) *Min = arr[i];
    }
    *num /= Num;
}

