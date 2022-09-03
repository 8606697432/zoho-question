#include <iostream>
#include <algorithm>
using namespace std;
void findPair(int nums[], int n, int target)
{
    sort(nums, nums + n);
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        // sum found
        if (nums[low] + nums[high] == target)
        {
            cout <<"\npossible\n";
            return;
        }
        (nums[low] + nums[high] < target)? low++: high--;
    }
    cout << "\nnot possible\n";
}
 
int main()
{
    int nums[10],n,target;
    cout<<"\nenter the size of the array\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cout<<"enter the array\n";
    cin>>nums[i];
    }
    cout<<"\nenter the target\n";
    cin>>target;
    findPair(nums, n, target);
 
    return 0;
}