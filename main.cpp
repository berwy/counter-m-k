#include <iostream>
using namespace std;

int main() {
int m, k, counter=0;
cout << "Ievadiet skaitļus m un k, kur m>k ";
cin >> m >> k;

for (int i=1; i<=k; i++)
{
 if (i%k==0) {counter++;}
}
cout << counter;

return 0;
}
