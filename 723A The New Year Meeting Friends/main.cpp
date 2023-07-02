#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
typedef long long ll;
/*
class Global_Currency{
protected:
    float dollar_value;
    Global_Currency(float value){
        dollar_value = value;
    }
public:
    float get_dollar_value(){
        return dollar_value;
    }
};

class EGP_Currency:public Global_Currency{
public:
    EGP_Currency(float value): Global_Currency(value/30.72){}
    float get_egp_value(){
        return dollar_value*30.72;
    }
};
*/
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int arr[] = {a, b, c};
    sort(arr, arr+3);
    cout <<  arr[2]- arr[0] ;
    return 0;
}
