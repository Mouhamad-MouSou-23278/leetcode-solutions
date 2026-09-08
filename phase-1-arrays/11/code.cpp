#include <iostream>
#include <vector> 
using namespace std; 

int min(int a,  int b)
{
    return (a > b ) ? b : a ;
}

int maxArea(vector<int>& arr) 
{
    int area = 0 ; 
    
    int r = arr.size() - 1 ; 
    int l = 0 ; 
    
    while(l < r)
    {
        int current_area = min(arr[l] , arr[r]) * (r - l); 
        
        if(current_area > area)
        {
            area = current_area; 
        }
        if(arr[l] > arr[r])
        {
            r--; 
        }
        if(arr[r] > arr[l])
        {
            l++; 
        }
        if(arr[r] == arr[l])
        {
            l++; 
            r--; 
        }
        
    }
    return area;    
}


int main()
{
    vector<int> arr = {1,8,6,2,5,4,8,3,7} ; 
    cout << maxArea(arr) << endl; 

    return 0;
}