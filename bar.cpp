#include <vector>
#include <string>
#include <iostream>
using namespace std;
vector<string> data={"212222","222122","222221","121223","121322","131222","122213","122312","132212","221213","221312","231212","112232","122132",
"122231","113222","123122","123221","223211","221132","221231","213212","223112","312131","311222","321122","321221","312212","322112","322211",
"212123","212321","232121","111323","131123","131321","112313","132113","132311","211313","231113","231311","112133","112331","132131","113123",
"113321","133121","313121","211331","231131","213113","213311","213131","311123","311321","331121","312113","312311","332111","314111","221411",
"431111","111224","111422","121124","121421","141122","141221","112214","112412","122114","122411","142112","142211","241211","221114","413111",
"241112","134111","111242","121142","121241","114212","124112","124211","411212","421112","421211","212141","214121","412121","111143","111341",
"131141","114113","114311","411113","411311","113141","114131","311141","411131","211412","211214","211232","2331112"};

string j(string n){
    string g="211232";
    string w=n;
    int y=2;
    int j=1;
    for(int i=0;i<w.length()-1;i=i+2){
        cout<<(w[i]+w[i+1])<<'\n';
        g+=data[10*((int)w[i]-48)+((int)w[i+1]-48)];
        y+=j*(10*((int)w[i]-48)+((int)w[i+1]-48));
        j++;
    }
    if(w.length()%2==1){
        g+=data[100];
        y+=100*j;
        j++;
        g+=data[16+(int)w[w.length()-1]-48];
        y+=(16+(int)w[w.length()-1]-48)*j;
    }
    g+=data[y%103];
    g+=data[106];
    return g;
}
/*
int main(){
    cout<<j("127010565");
    return 0;
}*/