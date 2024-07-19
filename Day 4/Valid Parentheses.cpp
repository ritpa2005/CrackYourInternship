    bool isValid(string s) {
        stack<char> stack;     
        int n = s.length();
        for(int i=0;i<n;i++){
        if((s[i] == '[' || s[i] == '{' || s[i] == '(')){
            stack.push(s[i]);
        }
        /*
        else if(s[i] == ']'){
            if(top!= -1 && stack[top]=='[') top--;
            else{return false;}
        }else if(s[i] == ')'){
            if(top!= -1 && stack[top] == '(') top--;
            else{return false;}
        }else if(s[i] == '}'){
            if(top!= -1 && stack[top] == '{') top--;
            else{return false;}
        }
        */
        else if(s[i]==']' || s[i]=='}' || s[i]==')'){
            if(!stack.empty() && 
                ((s[i]==']'&&stack.top()=='[')||
                (s[i]==')'&&stack.top()=='(')||
                (s[i]=='}'&&stack.top()=='{'))){
                    stack.pop();
            }
            else return false;
        }
        else{return false;}
        }
        return stack.empty();
    }