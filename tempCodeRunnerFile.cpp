for(int i = 0; i < 25; i++){
        debug(m);
        // breaking condition
        if(m == 0){
            cout << "NO" << "\n";
            return;
        }
        if(m == 1){ 
            cout << "YES" << "\n"; 
            return;
        }
        if(n%m == 0){ 
            cout << "NO" << "\n"; 
            return;
        }
        m = n%m;
    }
    cout << "I KNEW I FUCKED" << "\n";