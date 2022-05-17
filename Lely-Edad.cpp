# include<iostream> 
 using namespace std; 
 int main(){ _
         int Al_aa,Al_ma,Al_da,Al_an,Al_mn,Al_dn,Al_a,Al_m,Al_d; 
         cin>>Al_aa>>Al_ma>>Al_da>>Al_an>>Al_mn>>Al_dn; 
         if(Al_da>=Al_dn){ 
                 Al_d=Al_da-Al_dn; 
                 } 
         else{ 
                Al_ma=Al_ma-1; 
                 Al_da=Al_da+30; 
                 Al_d=Al_da-Al_dn; 
         } 
         if(Al_ma>=Al_mn){ 
               Al_m=Al_ma-Al_mn; 
         } 
         else{ 
                 Al_aa=Al_aa-1; 
                 Al_ma=Al_ma+12; 
  
                 Al_m=Al_ma-Al_mn; 
         } 
         Al_a=Al_aa-Al_an; 
         cout<<Al_a<<endl; 
         cout<Al_<m<<endl; 
         cout<<Al_d<<endl; 
 }
