#include<iostream>
using namespace std;

int main(){
    char choice;
	double e, f ,g;
   
    cout<<"for sum press a"<<endl;
    cout<<"for sub press b"<<endl;
    cout<<"for mul press c"<<endl;
    cout<<"for div press d"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    cout<<"enter no. for calculation"<<endl;
    cout<<"enter first no."<<endl;
    cin>>e;
    cout<<"enter second no."<<endl;
    cin>>f;
    if (choice=='a'){
        g=e+f;
        cout<<"sum of two no. is "<<g<<endl;
    }
    
    else if (choice=='b'){
        cout<<"sub of two no. "<<e-f<<endl;
        
    }
    else if(choice=='c'){
        cout<<"multiplication is "<<e*f<<endl;
        
    }
    else if(choice=='d'){
        if(f!=0){
            cout<<"division is "<<e/f<<endl;
        }
        else{
            cout<<"invalid division"<<endl;
        }
    }
    else{
        cout<<"invalid  choice"<<endl;
    }
    return 0;
}


