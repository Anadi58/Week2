#include <iostream>
using namespace std;
#define max 10

void Sort(int a[], int size) {
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (a[j] > a[j + 1]) 
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int countPairsWithDifference(int a[], int size, int key)
{
   Sort(a, size);

    int Pairs = 0;
    int left = 0, right = 1;
    while (right < size)
    {
        int currentDiff = a[right] - a[left];

        if (currentDiff == key) {
            Pairs++;
            left++;
            right++;
        } else if (currentDiff > key) {
            left++;
        } else {
            right++;
        }
    }

    return Pairs;
}

int main() {
    int a[max];
    int T,n,j,i,key;
    cout<<"enter no of test cases"<<endl;
    cin >> T;
    
    for(j=0;j<T;j++) 
    {
        cout<<"enter size of array"<<endl;
        cin >> n;
        cout<<"enter the elements"<<endl;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        cout<<"enter the difference of pairs"<<endl;
        cin >> key;

        int result = countPairsWithDifference(a, n, key);

        cout << "Number of pairs with difference " << key << ": " << result << endl;
    }

    return 0;
}
