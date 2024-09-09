#include<iostream>

using namespace std;

int getMulti(int number){
    int sum;
    sum = (number % 10) + (number / 10 % 10);
    return sum;

}

int sumOddDigits(string cardNumber){
    int sum_odd = 0 ;

    for(int i = cardNumber.size() -1 ; i >= 0 ; i -= 2 ){
        sum_odd += cardNumber[i] - '0' ;
        
    }
    return sum_odd;
}
int sumEvenDigit(string cardNumber){
    int sum_even = 0;
    

    for(int i = cardNumber.size() -2 ; i >= 0 ; i -= 2 ){
        sum_even += getMulti((cardNumber[i] - '0')*2) ;
        
    }
    return sum_even;

}



void checkValid (int x , int y){
    int sum_1 = x + y ;
    if(sum_1 % 10 == 0) {
        cout << "Card number is Valid" << endl;
    }
    else {
        cout << "Card number is not Valid" << endl ;
    }

}

int main(){
    
    string cardNumber;
    while(cardNumber != "q"){
    cout << "enter your card number or exit to please q :" << endl;
    cin >> cardNumber;
    if(cardNumber == "q"){
        break;
    }
    else{
    int x = sumOddDigits(cardNumber);
    int y = sumEvenDigit(cardNumber);
    checkValid(x , y);
    }
    }
    cout << "Thank you";
    
    






    return 0;
}