//Ryan Harbert
//Assignment 3

#include<iostream>
#include<string.h>
using namespace std;
 

int HexToDec(char hexVal[])
{   
    int length = strlen(hexVal);
    int base = 1;
    int dec = 0;

    for (int i=length-1; i>=0; i--)
    {   

        if (hexVal[i]>='0' && hexVal[i]<='9')
        {
            dec += (hexVal[i] - 48)* base;
            base = base * 16;
        }
        else if (hexVal[i]>='A' && hexVal[i]<='F')
        {
            dec += (hexVal[i] - 55)* base;
            base = base*16;
        }
    }   
    return dec;
}
 

int main()
{
    char CanMsg1[5] = "0140";
    char CanMsg2[5] = "0640";
    char CanMsg3[5] = "0960";
    char CanMsg4[5] = "0C80";

    int Dec1 = (HexToDec(CanMsg1) * .03125);
    int Dec2 = (HexToDec(CanMsg2) * .03125);
    int Dec3 = (HexToDec(CanMsg3) * .03125);
    int Dec4 = (HexToDec(CanMsg4) * .03125);
 
    cout << "0140: \nConverted = " << HexToDec(CanMsg1) << " \nDecoded = " << Dec1<< endl;
    cout << "0640: \nConverted = " << HexToDec(CanMsg2) << " \nDecoded = " << Dec2<< endl;
    cout << "0960: \nConverted = " << HexToDec(CanMsg3) << " \nDecoded = " << Dec3<< endl;
    cout << "0C80: \nConverted = " << HexToDec(CanMsg4) << " \nDecoded = " << Dec4<< endl;
    return 0;
}
