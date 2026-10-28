#include <iostream>
#include <cmath>
#include<cctype>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
//    int x=-10;
//    double y= -2.52;
//    cout<<"sqrt= "<<sqrt(abs(x))<<endl;
//    cout<<"cbrt= "<<cbrt(x)<<endl;
//    cout<<"ceil= "<<ceil(y)<<endl;
//    cout<<"floor= "<<floor(y)<<endl;
//    cout<<"round= "<<round(y)<<endl;
//    cout<<"power= "<<pow(abs(x),y)<<endl;
//    char c='A';
//    if(islower(c)){
//        cout<<char(toupper(c))<<endl;
//    }
//    else{
//        cout<<static_cast<char>(tolower(c))<<endl;
//    }
//    char z='$';
//    if(isalpha(z)){
//        cout<<"it is alpha"<<endl;
//    }
//    else if(isdigit(z)){
//        cout<<"it is digit"<<endl;
//    }
//    else{
//        cout<<"it is symbol"<<endl;
//    }
//start + rand()%(end -start +1)
//97 112
//97+rand()%(112-97+1)
//srand(time(0));
//for(int i=0;i<5;i++){
//    cout<<97+rand()%(112-97+1)<<endl;
//}
double a,b,h;
cout<<"enter a and b: ";
cin>>a>>b;
h=sqrt(pow(a,2)+pow(b,2));
cout<<h<<endl;
}
