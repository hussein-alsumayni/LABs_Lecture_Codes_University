#include <iostream>
#define max_size 3
using namespace std;
void init(int array[],int size){
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
}
void print(int arr[],int size){
for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;;
    }

    }
int main(){
//    const int s=3;
    int scores[3];
    int scores2[6];
    int arraySize = sizeof(scores)/sizeof(int);
cout<<"size= "<<sizeof(scores)/sizeof(int)<<endl;
cout<<"enter scores: ";
//for(int i=0;i<size(scores);i++){
//    cin>>scores[i];
//}
//for(int& s:scores){
//    cin>>s;
//}
init(scores,arraySize);
for(int i=0;i<arraySize;i++){
    scores2[i] = scores[i] + 10;
}
cout<<"scores= "<<endl;
int i=0;
//cout<<scores<<endl;
//cout<<&scores[2]<<endl;
//while(i<size(scores)){
//    cout<<scores[i]<<",";
//    i++;
//}
cout<<"first= "<<scores[0]<<endl;
cout<<"last= "<<scores[arraySize-1]<<endl;
cout<<endl;
//for(int s:scores){
//    cout<<s<<endl;
//}
//cout<<"scores2: "<<endl;
//for(int s:scores2){
//    cout<<s<<endl;
//}
print(scores,arraySize);
print(scores2,arraySize);


}
