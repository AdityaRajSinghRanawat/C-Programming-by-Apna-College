#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int count = 0;
    int target = 3;
    int i = 0;
    int j = i + 1;
    int arr1[10];
    cout<< "heloo";
    while (j < 5 && i <= j)
    {
        arr1[i] = arr[i] + arr[j];

        if (arr1[i] % target == 0)
        {
            j++;
        }
        else
        {
            count++;
        }
    } 
    if (j == 5)
    {
        i++;
    }
    return 0;
}