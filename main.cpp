#include <iostream>
#include<bits/stdc++.h>

using namespace std ;

int main()
{
       int n , t;
       cin >> n >> t  ;
       string a ;
       cin >> a ;
       while(t--)
       {
           string b ;
           cin >> b ;
           if(b=="pop_back")
           {
               a.pop_back();
           }
           else if(b=="front")
           {
               cout << a.front() << endl ;
           }
           else if(b=="back")
           {
               cout << a.back() << endl ;
           }
           else if(b=="sort")
           {
               int o , p ;
               cin >> o >> p ;
               sort(a.begin()+min(o,p) - 1,a.begin()+max(o,p));
           }
           else if(b=="reverse")
           {
               int q , w ;
               cin >> q >> w ;
               reverse(a.begin()+min(q,w)- 1,a.begin()+max(q,w));
           }
           else if(b=="print")
           {
               int y ;
               cin >> y ;
               cout << a[y - 1] << endl;
           }
           else if(b=="substr")
           {
               int l , r ;
               cin >> l >> r ;
               cout << a.substr(min(l,r) - 1,(max(l,r)-min(l,r)) + 1) << endl ;

           }
           else
           {
               char z ;
               cin >> z ;
               a.push_back(z);
           }
       }


    return 0;
}
