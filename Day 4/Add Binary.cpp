    string addBinary(string a, string b) {
        int an=a.length();
        int bn=b.length();
        if(an<bn) return addBinary(b,a);
        else{
            for(int i=0;i<an-bn;i++){
                b = "0"+b;
            }
        }
        int sm,carry=0;
        string s;
        string c = "0";
        for(int i=an-1;i>=0;i--){
            sm = (int)a[i] + (int)b[i] + carry -96;
            switch (sm){
            case 3: 
                s="1";
                carry=1;
                c = s+c;
                break;
            case 2: 
                s="0";
                carry=1;
                c = s+c;
                break;
            case 1: 
                s="1";
                carry=0;
                c = s+c;
                break;
            default: 
                s="0";
                carry=0;
                c = s+c;
                break;
            }
        }
        if(carry == 1) return "1"+c.substr(0,an);
        return c.substr(0,an);
    }