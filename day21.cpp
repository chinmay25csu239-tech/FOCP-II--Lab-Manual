/*  .... Size & Capacity .....*/
// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> v;
//     for(int i = 1;i<=10;i++){
//         v.push_back(i);
//         cout << "Inserted: " << i << "| size: " << v.size() << "| capacity: " << v.capacity() << endl;

//     }
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector <int> v;
//     int n;
//     cin >> n; 
//     for(int i = 1;i<=n;i++){
//         v.push_back(i);
//         cout << "Inserted: " << i << "| size: " << v.size() << "| capacity: " << v.capacity() << endl;

//     }
// } 

/* Vector Implemnation --> Transveral */
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {10,20,30,40};
//     for (int i =0;i<v.size();i++){
//         v[i] +=5;
//     }
//     for(int x :  v){   // for every element x in vector v  
//     cout << x << " "; 
//     }
// }
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector <int> v = {1,2,3,4};
//     v.insert(v.begin() + 2 , 99); //before index 2
//     v.erase(v.begin()+1); // remove index 1 
//     for(int x :  v){   // for every element x in vector v  
//     cout << x << " "; 
//     }
// }


/* Set implentation */
// #include <iostream>
// #include <set>
// using namespace std; 
// int main(){
//     set <int> s = {5,1,3,2,3,1};
//     for (int x : s){
//         cout << x << " "; 
//     }
// }
// #include <iostream>
// #include <set> 
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(10);
//     s.insert(20);
//     s.insert(30);
//     if(s.find(20) !=s.end()){
//         cout << "Found \n";
//         s.erase(20);
//         for (int x: s){
//             cout << x << " "; 
//         }
//     }
// // }
// #include <iostream>
// #include <set> 
// using namespace std;
// int main(){
//     set <int> s;
//     s.insert(10);
//     s.insert(10);
//     s.insert(10);
//     cout << "Count of 10: " << s.count(10) << endl; 
//     cout << "Size: " << s.size() << endl; 
// } 

#include <iostream>
#include <map> 
using namespace std;
int main(){
    map <int,string> m;
    m.insert({1,"Apple"}); 
    m.insert({2,"Banana"}); 
    cout << "Value: " << m[1] << endl;
    cout << "Pair: " << m[0][1] << endl; 

}