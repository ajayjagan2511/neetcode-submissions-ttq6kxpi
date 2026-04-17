class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int a,b;
        for(int i=0;i<tokens.size();i++){
            if((tokens[i]=="+")||(tokens[i]=="-")||(tokens[i]=="*")||(tokens[i]=="/"))
            {
                a = s.top();
                s.pop();
                b = s.top();
                s.pop();
                if(tokens[i]=="+")
                    b+=a;
                if(tokens[i]=="-")
                    b-=a;
                if(tokens[i]=="*")
                    b*=a;
                if(tokens[i]=="/")
                    b/=a;
                s.push(b);
                cout<<s.top()<<" ";
            }
            else
            s.push(stoi(tokens[i]));

        }
        return s.top();
    }
};
