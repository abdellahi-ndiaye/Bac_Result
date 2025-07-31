#include <iostream>
using namespace std;

int main(){
  
    float math , pc , sn , fr , ar , ir , ang , sp ;
    float average ;              
    int  x = 31 ;
    int  y = 32 ;
    

//your scores
  
    cout << "Math expected score :";
    cin >> math; 
     

    cout << "Pc expected score :";        
    cin >> pc; 

    cout << "sn expected score :";       
    cin >> sn; 
     

    cout << "Fr expected score :";
    cin >> fr; 
   

    cout << "Ar expected score :";
    cin >> ar; 

    cout << "Ir expected score :";
    cin >> ir; 
    

    cout << "Ang expected score :";
    cin >> ang; 


    float grade[] = {math , pc , sn , fr , ar , ir , ang , sp };


    for (int i = 0 ;  i <  8  ; i++){
    if(grade[i]>20 || grade[i] < 0 || cin.fail()){
        cout << endl;
        cout << "Error : Verify the entered numbers ";  
       return 1;
    }  }

    float sum=(math * 9) + (pc * 8) + (sn * 4) + (fr * 3) +(ar * 3 ) + (ir * 2) + (ang * 2) ;
    cout << "Did you do sports ( Yes = 1 | No = 2 ) :";
    int ran;
    cin >> ran;
 

     if( ran == 1 ){
        cout << " sp expected score :";
        cin >> sp;
        if(sp > 20 || sp < 0 ){
      cout << "Error : Verify the entered numbers ";  
       return 1;
        }
        average = (sum + sp)/y ;
        cout << "your average is :" ;    
        cout << average << endl;
       
    } else{
     cout << "your average is :" ;
     average = sum/x ;        
     cout << average << endl ;
    }

    
if (average >= 9.5)
    {
        cout << "successful";
    }else if(average < 9.5){
        cout <<"unsuccessful";
    }
    

    return 0;
}