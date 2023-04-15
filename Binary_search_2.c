// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    int low = 0, hight = n;
    while(low <= hight){
        int mid = low + (hight - low)/2;
        if(isBadVersion(mid))
            hight = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}