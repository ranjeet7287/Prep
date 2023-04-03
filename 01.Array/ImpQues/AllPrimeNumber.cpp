#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime==true && n!=1){
            cout<<i<<endl;
        }
    }
    /*
    Let us dry run the code:
N=7
● i=2
isPrime=true
➔ j=2, move out of the inner loop
 Print 2.
● i=3
isPrime=true
➔ j=2, 3%2!=0
➔ j=3, move out of the loop
 Print 3.
● i=4
isPrime=true
➔ j=2, 4%2=0, so isPrime=false and move out of the inner loop
 So, don’t print anything here.
● i=5
isPrime=true
➔ j=2, 5%2!=0
➔ j=3, 5%3!=0
➔ j=4, 5%4!=0
 Print 5.
● i=6
isPrime=true
➔ j=2, 6%2=0, isPrime=false, move out of the loop
 So, move out the inner loop.
● i=7
isPrime=true.
➔ j=2, 7%2!=0.
➔ j=3, 7%3!=0
➔ j=4, 7%4!=0
➔ j=5, 7%5!=0
➔ j=6, 7%6!=0
 Print 7
    */
}