#include <iostream>

using namespace std;

class studenti {
     public:
     string saxeli;
     string gvari;
     
     
     int asaki;
     int bewdva();
};

int studenti::bewdva(){
    cout<< saxeli <<endl;
    cout<< gvari <<endl;
    cout<< asaki <<endl;
    return asaki;
}



int main() {
    studenti studenti1;
    studenti studenti2;
    cout<<"shemoiyvanet pirveli studentis monacemebi\n"; 
    cin>>studenti1.saxeli>>studenti1.gvari>>studenti1.asaki;

 cout<<"studentis saxeli "<<studenti1.saxeli <<endl;

 cout<<"studentis gvari "<<studenti1.gvari <<endl;
 

 cout<<"studentis asaki "<<studenti1.asaki <<endl;
 
      cout<<"shemoiyvanet meore studentis monacemebi\n";
cin>>studenti2.saxeli>>studenti2.gvari>>studenti2.asaki;


 cout<<"studentis saxeli "<<studenti2.saxeli <<endl;

 cout<<"studentis gvari "<<studenti2.gvari <<endl;
  

 cout<<"studentis asaki "<<studenti2.asaki <<endl;
  
studenti1.bewdva();
studenti2.bewdva();
  if(studenti1.asaki>studenti2.asaki){
      cout <<"pirveli studentia  ufrosi"<<endl;
  }else if(studenti1.asaki=studenti2.asaki){
      cout<<"studentebi erti asakis arian "<<endl;
  }else {
      cout<< "meore studentia ufrosi"<<endl;
  }

    return 0;
}
