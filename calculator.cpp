#include <iostream> 
using namespace std; 
class Cal 
{ 
    private: 
        int n1; 
        int n2; 
    public: 
        Cal()//default constructor 
        { 
            cout<<"enter n1 :"; 
            cin>>n1; 
            cout<<"enter n2 :"; 
            cin>>n2; 
        } 
        Cal(int x , int y)//parameterized constructor 
        { 
            n1=x;//n1= 
            n2=y;//n2= 
        } 
    int sum() 
    { 
        return n1+n2; 
    } 
    float divide() 
    { 
        return (float)n1/n2;//typecast 
    } 
    int mod() 
    { 
        return n1%n2; 
    } 
    int mult() 
    { 
        
        return n1*n2; 
    } 
     
}; 
int main() 
{ 
    Cal ob1; 
    Cal ob2(1,2); 
    cout<<ob1.sum()<<endl; 
    cout<<ob1.divide()<<endl; 
    cout<<ob1.mod()<<endl; 
    cout<<ob1.mult()<<endl; 
    cout<<"------"<<endl; 
    cout<<ob2.sum()<<endl; 
    cout<<ob2.divide()<<endl; 
    cout<<ob2.mod()<<endl; 
    cout<<ob2.mult()<<endl; 
     
    return 0; 
}
