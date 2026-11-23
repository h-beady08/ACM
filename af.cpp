#include <iostream>
using namespace std;
 
int main() {
	    long long n, v = 0;
	        
	        cin>>n;
		    while (n >= 1){
			        if(n % 3 != 0)
					        v+=n;
				    n--;
				        }
		        cout<<v;
			    
			    return 0;
}
