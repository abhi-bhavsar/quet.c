#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
// function object
//" function wrapped in class so that it  could be used as object  "
int main()
{
    int arr[] = {1, 25, 14, 6, 21, 78};
    //  sort(arr, arr + 5);//--> in increasing order by default
    sort(arr, arr + 6, greater<int>()); // desceding order; after passing function object

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
