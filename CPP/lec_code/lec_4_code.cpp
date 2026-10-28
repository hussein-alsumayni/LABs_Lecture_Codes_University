#include<iostream>
#define arrSize 5
using namespace std;
void init(int arr[],int count);
void print(int arr[],int count);
bool isEqual(int arr1[],int arr2[],int s1,int s2);
bool searchArray(int arr[],int s,int key);
int getMax(int arr[],int s);
void sortArray(int arr[],int s);
void swapNums(int &a,int &b);
int main(){
    int array[arrSize] = {10,0,3,1,7};
    int array2[arrSize] = {1,2,3,9,7};
    cout<<"first= "<<array[0]<<endl;
    cout<<"last= "<<array[arrSize-1]<<endl;
//    print(array,arrSize);
//    init(array,arrSize);
cout<<"before:"<<endl;
    print(array,arrSize);
//    cout<<endl;
//    cout<<isEqual(array,array2,arrSize,arrSize);
//    cout<<boolalpha<<searchArray(array,arrSize,10);
//    cout<<"max= "<<getMax(array,arrSize)<<endl;
cout<<"after:"<<endl;
sortArray(array,arrSize);
print(array,arrSize);

}
void init(int arr[],int count){
    int k=0;
    cout<<"enter array elements:\n";
    while(k<count){
        cin>>arr[k];
        k++;
    }
}
void print(int arr[],int count){
    int z=0;
    cout<<"array:\n";
    do{
      cout<<arr[z]<<'\t';
      z++;
    }while(z<count);
}
bool isEqual(int arr1[],int arr2[],int s1,int s2){
    if(s1!=s2){
        return false;
    }
    else{
        for(int i=0;i<s1;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }

        }
        return true;
    }
}
bool searchArray(int arr[],int s,int key){
    for(int i=0;i<s;i++){
        if(key==arr[i]){
            return true;
        }
    }
    return false;
}
int getMax(int arr[],int s){
    int max=arr[0];
    for(int i=1;i<s;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}
void sortArray(int arr[],int s){
    for(int i=0;i<s;i++){
        for(int j=1;j<s;j++){
            if(arr[j]<arr[j-1]){
                swapNums(arr[j],arr[j-1]);
            }
        }
    }
}
void swapNums(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
