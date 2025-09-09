#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
// int main(){
//     int t ;
//     cin >> t;
//     while(t--){
//         int n , k , x ;
//         cin >> n >> k >> x ;
//         vector<int>v;
//         int rem;
//         for(int i = k ; i >= 1 ; i--){
//             if(i!=x){
//                  rem = n % i ;
//                 int times = n / i ;
//                 for(int j = 0 ; j < times ; j++){
//                     v.push_back(i);
//                 }
//                 n = rem ;
//                 if(n==0){
//                     break;
//                 }
                


//             }
//         }
//         if(n==0){
//             cout<<"YES"<<endl;
//             cout<<v.size()<<endl;
//             for(int i = 0 ; i < v.size();i++){
//                 cout<<v[i]<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }
//     }
// }

// upper solution is wrong but mujhe ise delete nhi karna 


int main()
{
    int t;
    cin >> t; 
    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x; 
        
        
        if (x != 1)
        {
            cout << "YES" << endl; 
            cout << n << endl; 
            for (int i = 1; i <= n; i++) 
                cout << 1 << " ";
            cout << endl;
        }
        else
        {
            
            if (k == 1 || (k == 2 && n % 2 == 1))
                cout << "NO" << endl; 
            else
            {
                cout << "YES" << endl; 
                if (n % 2 == 0)
                {
                    cout << n / 2 << endl; 
                    for (int i = 1; i <= n / 2; i++) 
                        cout << 2 << " ";
                    cout << endl;
                }
                else
                {
                    cout << (n - 3) / 2 + 1 << endl; 
                    for (int i = 1; i <= (n - 3) / 2; i++) 
                        cout << 2 << " ";
                    cout << 3 << endl; 
                }
            }
        }
    }
    return 0;
}

