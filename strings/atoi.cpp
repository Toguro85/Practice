int Solution::atoi(const string A) {
    if(A.size() == 0){
        return 0;
    }
    int i = 0;
    int neg_check = 0;
    long long int ans;
    while(isspace(A[i])){
        i++;
        if(i == A.size()){
            return 0;
        }
    }
    if(!isdigit(A[i])){
        if((A[i] != '-') && (A[i] != '+')){
            return 0;
        }
        else{
            if(i >= A.size()-1){
                return 0;
            }
            else if(i < A.size()-1){
                if(!isdigit(A[i+1])){
                    return 0;
                }
            }
            i++;
        }
    }
    if(i != 0){
        if(A[i-1] == '-'){
            neg_check = 1;
        }
    }
    string temp = "";
    while(i < A.size()){
        temp = temp + A[i];
        if(stol(temp) >= INT_MAX){
            break;
        }
        i++;
        if(isspace(A[i]) || !isdigit(A[i])){
            break;
        }
    }
    ans = stol(temp);
    if(neg_check == 1){
        ans = -ans;
    }
    if(ans > INT_MAX){
        return INT_MAX;
    }
    else if(ans < INT_MIN){
        return INT_MIN;
    }
    return (int)ans;
}
