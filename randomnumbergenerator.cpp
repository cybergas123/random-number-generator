#include <iostream>

using namespace std;


int main(){
    //message
    cout << "please input amount of numbers to generate : ";

    //generate numbers
    int generatenumbers = 0;

    cin >> generatenumbers;

    //range of numbers from to 
    int from = 0,to = 0;
    cout << "please input range of numbers : ";
    cout << "from : ";
    cin >> from;    
    cout << "to : ";
    cin >> to;

    srand(time(NULL));

    for (int i = 0; i < generatenumbers; i++)
    {
        //num
        int num = rand()%(to-from)+from;
        cout << num << " ";
    }
}
