#include <iostream>
using namespace std;

int main() {

   int tc;
   cin >> tc;
   while(tc--) {
   
       int n;
       cin >> n;
       char ch;
       int flag = 0;
       while(n--) {
       
           cin >> ch;
           if(ch == 'H'){
           
               if(flag != 0) {
               
                   flag = -1;
//                   goto end;
               }
               else flag = 1;
           }else if(ch == 'T') {
           
               if(flag != 1) {
               
                   flag = -1;
//                   goto end;
               }
               else flag = 0;
           }
       }
       end:
       if(flag) cout << "Invalid";
       else cout << "Valid";
       cout << endl;
   }
}
