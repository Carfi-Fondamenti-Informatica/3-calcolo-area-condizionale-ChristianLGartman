#include <iostream>
using namespace std;
int main() {
    int opzione;
    float a=0, b=0, area=0;
    cout<<"Dimmi i valori di a, di b e l'opzione che scegli:"<<endl;
    cin>>a>>b>>opzione;
    switch(opzione) {
        case 0:
            area = a * b / 2;
            cout << area;
            break;
        case 1:
            area = a * a;
            cout << area;
            break;
        case 2:
            area = a * b;
            cout << area;
            break;
        default:
            cout << "Opzione non valida";
    }
    return 0;
}
