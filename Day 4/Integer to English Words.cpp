    string numberToWords(int num) {
        if(num==0) return "Zero";
        map<int,string> m;
        m[1]="One"; m[2]="Two"; m[3]="Three"; m[4]="Four"; m[5]="Five"; m[6]="Six"; m[7]="Seven";
        m[8]="Eight"; m[9]="Nine"; m[10]="Ten"; m[11]="Eleven"; m[12]="Twelve"; m[13]="Thirteen"; 
        m[14]="Fourteen"; m[15]="Fifteen"; m[16]="Sixteen"; m[17]="Seventeen"; m[18]="Eighteen";
        m[19]="Nineteen"; m[20]="Twenty"; m[30]="Thirty"; m[40]="Forty"; m[50]="Fifty"; m[60]="Sixty";
        m[70]="Seventy"; m[80]="Eighty"; m[90]="Ninety";
        
        if(num<=20) return m[num];
        if(num<100 && num%10==0) return m[num];
        if(num<100) return m[(num/10)*10] +" "+ m[num%10];
        if(num<1000 && num%100==0) return m[(num/100)] +" Hundred";
        if(num<1000) return m[(num/100)] +" Hundred "+ numberToWords(num%100);
        if(num<1000000 && num%1000==0) return numberToWords(num/1000) +" Thousand";
        if(num<1000000) return numberToWords(num/1000) +" Thousand "+ numberToWords(num%1000);
        if(num<1000000000 && num%1000000==0) return numberToWords(num/1000000) +" Million";
        if(num<1000000000) return numberToWords(num/1000000) +" Million "+ numberToWords(num%1000000);
        if(num%1000000000==0) return numberToWords(num/1000000000) +" Billion";
        return numberToWords(num/1000000000) +" Billion "+ numberToWords(num%1000000000);
    }