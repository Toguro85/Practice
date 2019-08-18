#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int prec(char d)
{
    if(d=='^')
        return 3;
    else if(d=='/'||d=='*')
        return 2;
    else if(d=='+'||d=='-')
        return 1;
    return -1;
}
void postfix(string a)
{
    int m=a.length();
    char c;int f=0;
    stack<char> st;
    st.push('N');
    string ns;
    for(int i=0;i<m;i++)
    {
        if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
        {
            c=a[i];
            ns+=c;
        }
        else if(a[i]=='(')
        {
            st.push(a[i]);
        }
        else if(a[i]==')')
        {
            while(st.top()!='('&&st.top()!='N')
            {
                c=st.top();
                ns+=c;
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(st.top()!='N'&&prec(a[i])<=prec(st.top()))
            {
                c=st.top();
                ns+=c;
                st.pop();
            }
            st.push(a[i]);
        }
    }
    
            while(st.top()!='N')
            {
                ns+=st.top();
                st.pop();
            }
    cout<<ns<<endl;
    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    string s;
    scanf("%d",&n);
    while(n)
    {
        cin>>s;
        postfix(s);
        n--;
    }
    return 0;
}
