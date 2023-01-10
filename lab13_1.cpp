#include<iostream>
#include<ctime>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0; 
}


int fibonacci(int y){
    if(y == 0){
        return 0;
    }if(y == 1){
        return 1;
    }else{
        return fibonacci(y-1) + fibonacci(y-2);
    }

}
