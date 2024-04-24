#include <iostream>
#include <locale.h>
using namespace std;
int main() {
  int n, cont=3, temp, ult=1, penult=0;

     cout << "exibir quantos termos: ";
     cin >> n;

     cout << penult << endl << ult << endl;

  while(cont<=n){
        cout << (ult+penult) << endl;

        temp = penult;
        penult = ult;
        ult = ult + temp;
        cont++;
  }
  return 0;
}
