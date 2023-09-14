#include <iostream>
#include <vector>
using namespace std;
vector <int> del(int c){
    vector <int> v;
    for (int i=c; i>=1; i--){
       if (c%i==0){
           v.push_back(i);
       } 
    }
    return v;
    
}
int main()
{
    int a, b;
    vector <int> s;
    cin >> a >> b;
        for (int j=a; j<b; j++){
        s=del(j);
            if (s.size()==4){
            cout << "(" << j << ")" << " ";
            for (int i=0; i<s.size(); i++){
                cout << s[i] << " ";
            }
            cout << endl;
            }
        }
    

    return 0;
}
