#include<iostream>
using namespace std;

class student{
    private:
    int Rollnumber;
    string name;
    float grad;

    public:
    student(int r , string n , float g){
        Rollnumber = r;
        name = n;
        grad = g;
    }

    void display(){
            cout<<"Rollnumber"<<Rollnumber<<endl;
            cout<<"Name"<<name<<endl;
            cout<<"Grade"<<grad<<endl;
     };
};

int main(){
    student s(44,"Brahm kapil " , 33);
    s.display();
    return 0;
}