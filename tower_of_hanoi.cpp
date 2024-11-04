#include<bits/stdc++.h>

using namespace std;

class TowerOfHanoi {
public:
    static void solve(int n, char from, char to, char auxi, int &count) {
        if (n == 0) return;
        if (n == 1) {
            cout << "Move disk 1 from " << from << " to " << to << endl;
            count++;
            return;
        }
        solve(n - 1, from, auxi, to, count);
        cout << "Move disk " << n << " from " << from << " to " << to << endl;
        count++;
        solve(n - 1, auxi, to, from, count);
    }
};

//main function

int main()
{
    int n, count = 0;
    cout << "Enter the number of disks: ";
    cin >> n;
    TowerOfHanoi temp;
    temp.solve(n, 'A', 'C', 'B', count);
    cout <<count << endl;
    return 0;
}


