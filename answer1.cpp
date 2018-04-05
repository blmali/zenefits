#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    string s;
    //std::
   
    //std::deque<char>st;
    for(int i=1;i<=t;i++)
    {
        cin>>s;
        stack<char>st;
        int siz=s.size();
        for(int j=0;j<siz;j++)
        {   if(s[j]!=',')
            st.push(s[j]);
            if(st.top()=='}')
            {   if(st.size()>2)
                {
                char a,b,c;st.pop();
                a=st.top();st.pop();
                b=st.top();st.pop();
                c=st.top();st.pop();
                if(b!='0')cout<<b<<" ";
                cout<<c<<" ";
                if(a!='0')cout<<a<<" ";
                st.pop();
                if(st.size()>=2)
                cout<<st.top()<<" ";st.pop();
                }
            }
        }
       cout<<"\n"; 
    }
	return 0;
}
