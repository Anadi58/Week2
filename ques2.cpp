#include <iostream>
using namespace std;
#define max 20
void findTriplets(int a[], int size)
{
    for (int i = 0; i < size - 2; ++i) 
    {
        for (int j = i + 1; j < size - 1; ++j)
        {
            for (int k = j + 1; k < size; ++k) 
            {
                if (a[i] + a[j] == a[k])
                {
                    cout << "Triplets found: " << i << ", " << j << ", " << k << endl;
                    return;
                }
            }
        }
    }
    cout << "No sequence found" << endl;
}

int main() 
{
    int T,j,n;
    int a[max];
    cout<<"enter no of test cases"<<endl;
    cin >> T;

    for(j=0;j<T;j++)
    {
        cout<<"enter size of array"<<endl;
        cin >> n;
        cout<<"enter elements"<<endl;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        findTriplets(a, n);
    }

    return 0;
}
