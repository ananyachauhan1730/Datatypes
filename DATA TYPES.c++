\\Ananya Chauhan
\\24070123157
\\Entc-B3
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer ";
    cin>>a;
    cout<<"Integer " <<a<< " and size is " <<sizeof(a)<< " bytes" << endl;

    float b;
    cout<<"Enter any number with decimal ";
    cin>>b;
    cout<<"Float " <<b<< " and size is " <<sizeof(b)<< " bytes"<< endl;

    string c;
    cout<<"Enter any word ";
    cin>>c;
    cout<<"String " <<c<< " and size is " <<sizeof(c)<< " bytes" << endl;

    double d;
    cout<<"Enter any number with bigger decimal ";
    cin>>d;
    cout<<"Double " <<c<< " and size is " <<sizeof(d)<< " bytes" << endl;

    char e;
    cout<<"Enter any letter ";
    cin>>e;
    cout<<"Charerecter " <<e<< " and size is " <<sizeof(e)<< " bytes" << endl;

    return 0;
}

/*
output:
#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer ";
    cin>>a;
    cout<<"Integer " <<a<< " and size is " <<sizeof(a)<< " bytes" << endl;

    float b;
    cout<<"Enter any number with decimal ";
    cin>>b;
    cout<<"Float " <<b<< " and size is " <<sizeof(b)<< " bytes"<< endl;

    string c;
    cout<<"Enter any word ";
    cin>>c;
    cout<<"String " <<c<< " and size is " <<sizeof(c)<< " bytes" << endl;

    double d;
    cout<<"Enter any number with bigger decimal ";
    cin>>d;
    cout<<"Double " <<c<< " and size is " <<sizeof(d)<< " bytes" << endl;

    char e;
    cout<<"Enter any letter ";
    cin>>e;
    cout<<"Charerecter " <<e<< " and size is " <<sizeof(e)<< " bytes" << endl;

    return 0;
}

/*#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter any integer ";
    cin>>a;
    cout<<"Integer " <<a<< " and size is " <<sizeof(a)<< " bytes" << endl;

    float b;
    cout<<"Enter any number with decimal ";
    cin>>b;
    cout<<"Float " <<b<< " and size is " <<sizeof(b)<< " bytes"<< endl;

    string c;
    cout<<"Enter any word ";
    cin>>c;
    cout<<"String " <<c<< " and size is " <<sizeof(c)<< " bytes" << endl;

    double d;
    cout<<"Enter any number with bigger decimal ";
    cin>>d;
    cout<<"Double " <<c<< " and size is " <<sizeof(d)<< " bytes" << endl;

    char e;
    cout<<"Enter any letter ";
    cin>>e;
    cout<<"Charerecter " <<e<< " and size is " <<sizeof(e)<< " bytes" << endl;

    return 0;
}

/*
output:
Enter any integer 16
Integer 16 and size is 4 bytes
Enter any number with decimal 4.8
Float 4.8 and size is 4 bytes
Enter any word Ananya 
String Ananya and size is 32 bytes
Enter any number with bigger decimal 6.654323457643
Double 6.65434345643 and size is 8 bytes
Enter any letter A
Charerecter A and size is 1 bytes
*/
