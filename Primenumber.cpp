#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool prime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
    }
    if(prime==0){
        cout<<"Not prime";
    } 
    else{
        cout<<"prime";
    }
        
}

/*ouput:
n=9
Not prime
n=11
prime
*/
