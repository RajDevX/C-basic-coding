#include <iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    while (num>0)
    {
        /* code */
        count++;
        num =num/10;

    }
    
    cout<<count;
    return 0;
}