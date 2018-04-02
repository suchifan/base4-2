//
//  main.cpp
//  base4-2
//
//  Created by suchao on 4/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

//function define
int CountDigit(int n){
    int result = 1;
    
    while(n > 9){
        n = n / 10;
        result++;
    }
    return result;
}

//function define
int KthDigit(int n, int k){
    for(int i=1; i<k; i++){
        n = n / 10;
    }
    
    return n%10;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n:\n";
    int n,m;
    cin >> n;
    //function call
    m = CountDigit(n);
    
    //function call
    cout<< "result = " << KthDigit(n, m/2) << endl;
    return 0;
}
