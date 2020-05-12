double power (double x, unsigned int n){
    if(n==0){
        return 1.0
    }

    else{
        return x*power(x, n-1);
    }
}
