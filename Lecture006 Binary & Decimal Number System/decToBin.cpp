#include<iostream>
#include<math.h>
using namespace std;


int main() {
    int n;
cout<<"enter the val :";
cin >> n;


int ans  = 0;
int i = 1;
int place=1;
while(n != 0 ) {

    int bit  = n & 1;

    ans=ans+bit*i;
    i=i*10;
    n=n>>1;

        

}

cout<<" Answer is " << ans << endl;


    

return 0;
}

     

    return 0;
}
