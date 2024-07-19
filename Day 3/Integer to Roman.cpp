string intToRoman(int num) {
    string s;
    int i=0;
    while(num>0){
        if(num>=1000){
            s += 'M'; 
            num=num-1000;
        }
        else if(num>=900){
            s+='C';
            s+='M';
            num=num-900;
        }
        else if(num>=500){
            s +='D';
            num-=500;
        }
        else if(num>=400){
            s+='C';
            s+='D';
            num=num-400;
        }
        else if(num>=100){
            s+='C';
            num=num-100;
        }
        else if(num>=90){
            s+='X';
            s+='C';
            num=num-90;
        }
        else if(num>=50){
            s+='L';
            num-=50;
        }
        else if(num>=40){
            s+='X';
            s+='L';
            num=num-40;
        }
        else if(num>=10){
            s+='X';
            num=num-10;
        }
        else if(num>=9){
            s+='I';
            s+='X';
            num=num-9;
        }
        else if(num>=5){
            s+='V';
            num-=5;
        }
        else if(num>=4){
            s+='I';
            s+='V';
            num=num-4;
        }
        else if(num>=1){
            s+='I';
            num=num-1;
        }
    }
    return s;
}