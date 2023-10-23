while(k>=0){
        int zero = 0;
        int one = 0;
        while(k>=0 && a[k--] == 0){
            zero++;
        }
        if(k > 0) k++; 
        while(k>=0 && a[k--] == 1){
            one++;
        }
        if(k > 0) k++;
        v.pb({zero,one});
    }