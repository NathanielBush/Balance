#include <iostream>

using namespace std;

bool funct(int a, int b, int c, int d, int i) {
    
        // all combined
        if (a+b+c+d==i) {
            return true;
        }
        else if(a == i || b == i || c == i || d == i ) {
            return true;
        }
        //subtract 1
        else if(a+b+c==i-d){
            return true;
        }
        else if(a+b+d==i-c){
            return true;
        }
        else if(a+c+d==i-b){
            return true;
        }
        else if(d+b+c==i-d){
            return true;
        }
        //subtract 2
        else if(a+b==i-c-d) {
            return true;
        }
        else if(a+c==i-b-d) {
            return true;
        }
        else if(a+d==i-b-c) {
            return true;
        }
        else if(b+c==i-a-d) {
            return true;
        }
        else if(b+d==i-a-c) {
            return true;
        }
        else if(c+d==i-a-b) {
            return true;
        }
        //subtract 4
        else if(a==i-b-c-d) {
            return true;
        }
        else if(b==i-a-c-d) {
            return true;
        }
        else if(c==i-a-b-d) {
            return true;
        }
        else if(d==i-a-b-c) {
            return true;
        }
        //not using d
        else if(a+b+c==i) {
            return true;
        }
        //subtract 1
        else if(a+b==i-c) {
            return true;
        }
        else if(a+c==i-b) {
            return true;
        }
        else if(b+c==i-a) {
            return true;
        }
        //subtract 2
        else if(a==i-b-c) {
            return true;
        }
        else if(b==i-a-c) {
            return true;
        }
        else if(c==i-a-b) {
            return true;
        }
        //not using c
        else if(a==i-b-d) {
            return true;
        }
        else if(b==i-a-d) {
            return true;
        }
        else if(d==i-a-b) {
            return true;
        }
        //not using b
        else if(a==i-d-c) {
            return true;
        }
        else if(d==i-a-c) {
            return true;
        }
        else if(c==i-a-d) {
            return true;
        }
        //not using a
        else if(d==i-b-c) {
            return true;
        }
        else if(b==i-d-c) {
            return true;
        }
        else if(c==i-d-b) {
            return true;
        }
        //not c and d
        else if(a==i-b) {
            return true;
        }
        else if(b==i-a) {
            return true;
        }
        //not b and d
        else if(a==i-b) {
            return true;
        }
        else if(c==i-a) {
            return true;
        }
        //not a and d
        else if(c==i-b) {
            return true;
        }
        else if(b==i-c) {
            return true;
        }
        //not a and d
        else if(c==i-b) {
            return true;
        }
        else if(b==i-c) {
            return true;
        }
        //not b and c
        else if(a==i-d) {
            return true;
        }
        else if(d==i-a) {
            return true;
        }
        //not a and c
        else if(d==i-b) {
            return true;
        }
        else if(b==i-d) {
            return true;
        }
        //not a and b
        else if(d==i-c) {
            return true;
        }
        else if(c==i-d) {
            return true;
        }


        //subtract 1
        else if(a+b+c==i+d){
            return true;
        }
        else if(a+b+d==i+c){
            return true;
        }
        else if(a+c+d==i+b){
            return true;
        }
        else if(d+b+c==i+d){
            return true;
        }
        //subtract 2
        else if(a+b==i+c+d) {
            return true;
        }
        else if(a+c==i+b+d) {
            return true;
        }
        else if(a+d==i+b+c) {
            return true;
        }
        else if(b+c==i+a+d) {
            return true;
        }
        else if(b+d==i+a+c) {
            return true;
        }
        else if(c+d==i+a+b) {
            return true;
        }
        //subtract 4
        else if(a==i+b+c+d) {
            return true;
        }
        else if(b==i+a+c+d) {
            return true;
        }
        else if(c==i+a+b+d) {
            return true;
        }
        else if(d==i+a+b+c) {
            return true;
        }
        //not using d
        else if(a+b+c==i) {
            return true;
        }
        //subtract 1
        else if(a+b==i+c) {
            return true;
        }
        else if(a+c==i+b) {
            return true;
        }
        else if(b+c==i+a) {
            return true;
        }
        //subtract 2
        else if(a==i+b+c) {
            return true;
        }
        else if(b==i+a+c) {
            return true;
        }
        else if(c==i+a+b) {
            return true;
        }
        //not using c
        else if(a==i+b+d) {
            return true;
        }
        else if(b==i+a+d) {
            return true;
        }
        else if(d==i+a+b) {
            return true;
        }
        //not using b
        else if(a==i+d+c) {
            return true;
        }
        else if(d==i+a+c) {
            return true;
        }
        else if(c==i+a+d) {
            return true;
        }
        //not using a
        else if(d==i+b+c) {
            return true;
        }
        else if(b==i+d+c) {
            return true;
        }
        else if(c==i+d+b) {
            return true;
        }
        //not c and d
        else if(a==i+b) {
            return true;
        }
        else if(b==i+a) {
            return true;
        }
        //not b and d
        else if(a==i+b) {
            return true;
        }
        else if(c==i+a) {
            return true;
        }
        //not a and d
        else if(c==i+b) {
            return true;
        }
        else if(b==i+c) {
            return true;
        }
        //not a and d
        else if(c==i+b) {
            return true;
        }
        else if(b==i+c) {
            return true;
        }
        //not b and c
        else if(a==i+d) {
            return true;
        }
        else if(d==i+a) {
            return true;
        }
        //not a and c
        else if(d==i+b) {
            return true;
        }
        else if(b==i+d) {
            return true;
        }
        //not a and b
        else if(d==i+c) {
            return true;
        }
        else if(c==i+d) {
            return true;
        }
        // random
        else if(d+c==i) {
            return true;
        }

        else if(d+b==i+c) {
            return true;
        }
        else if(d+a==i+b) {
            return true;
        }
        else if(d+b==i+a) {
            return true;
        }
        else if(d+c==i+b) {
            return true;
        }
        else if(d+c==i+a) {
            return true;
        }
        else if(d+c+b==i+a) {
            return true;
        }
        else if(d+a==i+c) {
            return true;
        }



        return false;

    }

int main() {
    
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int answer;
    
    bool done = false;
    bool end = false;
    
    /*
    for(int i = 1; i < 40; ++i) {
        if(funct(1, 3, 9, 27, i) == false) {
            cout << i << endl;
        }

    }
    */

        while(done == false) {
            a++;
            if(a == 40) {
                break;
            }
            
            while(done == false || end == true) {

                b++;
                if(b == 40) {
                    b = 1;
                    break;
                }
                while(done == false || end == true) {

                    c++;
                    if(c == 40) {
                        c = 1;
                        break;

                    }
                    
                    while(done == false || end == true) {

                        d++;
                        if(d == 40) {
                            d = 1;
                            break;

                        }
                        
                        int count = 0;
                        for(int i = 1; i <= 40; i++) {
                            if(funct(a,b,c,d,i) == true) {
                                count++;
                            }

                        }
                        if(count == 40) {
                            done = true;
                        }
                        cout << a << ' ' << b << ' ' << c << ' '<< d << endl;

                        
                    }
                }
            }
        }
        

    return 0;
}