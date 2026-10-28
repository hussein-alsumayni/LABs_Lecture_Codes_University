#include <iostream>
using namespace std;
double sumMarks(double mark1,double mark2,double mark3){
    double sum = mark1+mark2+mark3;
    return sum;
}
double average(double total){
    double avg=total/3;
    return avg;
}
bool isPrime(int x){
    if(x<=1)
    {

        return false;
    }
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }

    }
    return true;
}
int main(){
//    double sum= sumMarks(97,81.5,90);
//    cout<<"your average= "<<average(sum)<<endl;
//    cout<<"end of program"<<endl;
cout<<isPrime(67)<<endl;
cout<<isPrime(6)<<endl;
cout<<isPrime(39)<<endl;
}


//void greetUser(string userName);
//int main(){
//    greetUser("marwa");
//    greetUser("byan");
//    greetUser("salwa");
//}
//void greetUser(string name){
//    cout<<"welcome "<<name<<" to C++"<<endl;
//}













//void greet(){//declaration+definition
//    cout<<"welcome to C++"<<endl;
//}
//int main(){
//    cout<<"hi"<<endl;
//    greet();//function call
//    cout<<"bye"<<endl;
//}

