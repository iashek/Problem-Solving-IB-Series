bool strnum(string a,string b) {
    return a+b > b+a;
}

string Solution::largestNumber(const vector<int> &A) {
 
    string str = "";
    vector<string>nums;
    
    for(int i=0;i<A.size();i++) {
        nums.push_back(to_string(A[i]));
    }
    
    sort(nums.begin(),nums.end(),strnum);
    
    for(int i=0;i<nums.size();i++) {
        str += nums[i];
    }
    
    while(str[0] == '0' && str.length() != 1) {
        str.erase(str.begin());
    }
    
    return str;
    
}
