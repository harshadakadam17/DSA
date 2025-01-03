// #include <iostream>
// using namespace std;

// int main(){
//     int n=5;

//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++){
//             cout<<" "<<"*";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch = 'A';

//     for (int i = 0; i < n; i++)
//     {

//         for (int j = 0; j < n; j++)
//         {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int num=1;
//     for (int i = 0; i < n; i++)

//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ' ' <<num;
//             num++;
            
//         }
//         cout << '\n';
//     }
//     return 0;
// }



#include <iostream>
using namespace std;

// // void print_pattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<"\n";
//     }
// }
void print_pattern(int n){
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<j;
        }
                cout<<"\n";

    }
}
int main(){
    int n;
    cin>>n;
    print_pattern(n);
    return 0;
}