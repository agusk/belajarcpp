#include <iostream>

using namespace std;
int main ()
{
   // ganti nilai ini sesuai dengan keinginan	
   int a = 10;
   int b = 15;
   
   cout<< a <<"=="<<b <<"  " <<  (a==b ? "true":"false") << endl;
   cout<< a <<"!="<<b <<"  " <<  (a!=b ? "true":"false") << endl;
   cout<< a <<">="<<b <<"  " <<  (a>=b ? "true":"false") << endl;
   cout<< a <<"<="<<b <<"  " <<  (a<=b ? "true":"false") << endl;
   cout<< a <<">"<<b <<"  " <<  (a>b ? "true":"false") << endl;
   cout<< a <<"<"<<b <<"  " <<  (a<b ? "true":"false") << endl;
   
      
   return 0;
}