/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double Anbti = 1; //
    double tox = 0.65*pow(10,-9); 
    double Cox = 4.6*pow(10, -20)/pow(10, -18); 
    double Vdd = 1.8; //
    double Vt = 0.2; //
    double Vdd_Vt =Vdd-Vt;
    double Eo = 0.2*1000000000;
    double Ea = 0.13*1.6*pow(10,-19);
    double k = 8.6174*0.00001*1.6*pow(10,-19);
    double t_stress =0.000000002;
    double T = 363; //
    double eta =0.35;
    double trec = 0.000000002;//time under recovery
    
    double E1 = 0.8*1000000000;
    double alpha = 1.3; 
    double f = 4000000000; //
    double Ahci= 1;//
    double t = 0.000000002;  //for HCI
    
    double Vt_stress = Anbti*tox*sqrt(Cox*Vdd_Vt)*exp((Vdd_Vt/(tox*Eo))-(Ea/(k*T)))*pow(t_stress,0.25);
    double delta_Vt = Vt_stress*(1 - sqrt(eta*trec/(t_stress+trec)));
    double Vt_hci = Ahci*alpha*f* exp(Vdd_Vt/(tox*E1))*pow(t, 0.5);
    
    cout<<"Vt_stress "<<Vt_stress<<endl;
    cout<<"delta_Vt "<<delta_Vt<<endl;
    cout<<"Vt_hci "<<Vt_hci<<endl;

    return 0;
}