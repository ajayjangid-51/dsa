//🔥💲🍕 As NOW YAHA pe aab apn
// 1. Get(index)-operation  (mtlb apn inputed-index pe element batayenge.. mtlb voh element return krenge.. )
// 2. Set(index , value)-Operation (mtlb apn inputed-index pe inputed-value set kr denge... )
// 3. Max(arr)-operation
// 4. Min(arr)-operation
// 5. sum(arr)-operation
// 6. average(arr)-Operation dekhenge:  🍕💲🔥

#include <iostream>
using namespace std;
struct Array
{
    int A[10];
    int length;
    int size;
};

struct maxandmin
{
    int max = 0;
    int min = 1000;
};
//💲🍕 1.Get-Operation 🍕💲
int Get(Array arr, int index)
{
    if (index >= 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
//💲🍕 2.Set-Operation 🍕💲
void Set(Array &arr, int index, int value)
{
    if (index >= 0 && index < arr.length)
        arr.A[index] = value;
    else
        cout << "the index in not valid mtlb it is not avilable for this array." << endl;
}

//💲🍕 3.Max-Operation 🍕💲
int Max(Array arr)
{
    int max = arr.A[0];
    int i = 1;
    while (arr.length-- > 1)
    {
        if (max < arr.A[i])
        {
            max = arr.A[i];
            i++;
        }
        else
        {
            i++;
        }
    }
    return max;
}

//💲🍕 4.Min-Operation 🍕💲
int Min(Array arr)
{
    int min = arr.A[0];

    int i = 1;
    while (arr.length-- > 1)
    {
        if (min > arr.A[i])
        {
            min = arr.A[i];
            // cout << min << endl;
            i++;
        }

        else
            i++;
    }

    return min;
}
//💲🍕 5.Sum-Operation 🍕💲
int Sum(Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum += arr.A[i];
    }
    return sum;
}
//💲🍕 6.Avg-Operation 🍕💲
float Avg(Array arr)
{
    return float(Sum(arr)) / arr.length;
}
int main()
{
    Array arr = {{13, 42, 5, 9, 21, 101, 105, 57}, 8, 10};
    // maxandmin xx = {0, 0};

    cout << "input the index to get the value at that index...." << endl;
    int index;
    cin >> index;
    cout << "the value at index " << index << " is " << Get(arr, index) << endl;
    cout << "input the index and value to insert at your inputed-index" << endl;
    int setindex, value;
    cin >> setindex >> value;
    Set(arr, setindex, value);
    cout << Get(arr, setindex) << endl;

    cout << "the maximum element in array is" << Max(arr) << endl;
    cout << "the minimum element in array is " << Min(arr) << endl;
    cout << "the sum of the array is " << Sum(arr) << endl;
    cout << "the average of the array is " << Avg(arr) << endl;

    return 0;
}