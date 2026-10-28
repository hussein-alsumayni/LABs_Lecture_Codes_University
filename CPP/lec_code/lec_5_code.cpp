#include<iostream>
using namespace std;
const int rows=3;
const int cols=2;
void print(int array[][cols],int rows);
void studentAverage(int array[][cols],int rows);
int main(){
    int scores[3][2];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<"enter scores of student "<<i+1<<" in subject "<<j+1<<": ";
            cin>>scores[i][j];
        }
    }
    print(scores,3);
    studentAverage(scores,3);

}
void print(int array[][cols],int rows){
    int k=0;
    while(k<rows){
        int z=0;
        cout<<"student "<<k+1 <<" scores: \n";
        while(z<cols){
            cout<<array[k][z]<<'\t';
            z++;

        }
        cout<<endl;
        k++;
    }
}
void studentAverage(int array[][cols],int rows){
    for(int i=0;i<rows;i++){
        double avg=0;
        for(int j=0;j<cols;j++){
            avg+=array[i][j];
        }
        cout<<"average of student "<<i+1<<"= "<<static_cast<double>(avg)/cols<<endl;
    }

}
