#ifndef Fact 
#define Fact
#include <iostream>
 using namespace std;
  int main()
  {
	  int n, i, res;
	  n = 10;
	  res = 1;

	  for (int i = 1; i <= n; ++i)
	  {
		  res = res * i;
		  cout << i << " " << res<< endl;
		  cout << " " << endl;
	  }
			

	}
#endif
