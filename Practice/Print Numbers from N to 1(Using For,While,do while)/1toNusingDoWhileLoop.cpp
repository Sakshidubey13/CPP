#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number : ";
    cin>>n;

    do{
        cout<<n<<endl;
        n--;
    }while (n>=1);
    
    return 0;
}