//Problem link - https://www.interviewbit.com/problems/rotated-array/

//solution
int Solution::findMin(const vector<int> &a) {
    int n = a.size();
    int l = 0;
    int h = a.size() - 1;
    while(l <= h){
        
        if(a[l] < a[h]){
            return a[l];
        }
        int mid = l + (h-l)/2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;
        if(a[mid] < a[prev] && a[mid] < a[next]){
            return a[mid];
        }
        else if(a[mid] <= a[h]){
            h = mid - 1;
        }
        else if(a[mid] >= a[l]){
            l = mid + 1;
        }
        
    }
    return -1;
}
