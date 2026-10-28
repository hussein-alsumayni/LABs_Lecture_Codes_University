#include<iostream>
using namespace std;
struct Address{
    string country;
    string city;
    string street;
    int postCode;
};
struct Student{
    int id;
    string name;
    int age;
    float gpa;
    Address address;
    char gender;
    string phone;
    bool isSuccessful;
};
void initiAddress(Address& ad){
    cout<<"country:"; cin>>ad.country;
    cout<<"city:"; cin>>ad.city;
    cout<<"street:"; cin>>ad.street;
    cout<<"postCode:"; cin>>ad.postCode;
}
void initialize(Student& st){
    cout<<"enter student details:"<<endl;
    cout<<"id: "; cin>>st.id;
    cout<<"name: "; cin>>st.name;
    cout<<"age: "; cin>>st.age;
    cout<<"address: ";
    initiAddress(st.address);
    cout<<"gpa: "; cin>>st.gpa;
}
void printAddress(const Address& ad){
    cout<<ad.country<<endl;
    cout<<ad.city<<endl;
    cout<<ad.street<<endl;
    cout<<ad.postCode<<endl;
}
void print(const Student& st){
        cout<<st.id<<endl;
        cout<<st.name<<endl;
        cout<<st.age<<endl;
        cout<<st.gpa<<endl;
        printAddress(st.address);
    }
int main(){
    Student students[3];
    Student s={9,"Ahmed",10,2.9,"yemen","sana","19th",88};
    Student s2;
//   initialize(s2);
for(int i=0;i<3;i++){
    initialize(students[i]);
}
//    s.id=10;
//    s.name="Ali";
//    cin>>s.address;
if(s.id==s2.id ){
    cout<<"equal";
}
//    cout<<"student1\n";
//    print(s);
//
//    cout<<"student2:"<<endl;
//    print(s2);
for(int i=0;i<3;i++){
    cout<<"student "<<i+1<<endl;
    print(students[i]);
}


}
