#include <iostream>
#include <vector>
using namespace std;
vector<pair<int, int>> carros;

double ancho(double t){
    double pos_max = -1e5;
    double pos_min = 1e5;

    for ( int i = 0; i < carros.size(); i++ ){
        double pos = (double)carros[i].first + carros[i].second * t;
        pos_max = max(pos_max, pos);

        pos_min = min(pos_min, pos);
    }
    return pos_max - pos_min;
}

double func(){
    const double EPSILON = 1e-8;

    double low = 0;
    double higth = 1e5;

    while(higth - low > EPSILON){
        double mid1 = low + (higth - low) / 3.0;
        double mid2 = higth - (higth - low) / 3.0;

        double ancho1 = ancho(mid1);
        double ancho2 = ancho(mid2);

        if(ancho1 < ancho2)
            higth = mid2;
        else
            low = mid1;
    }

    return ancho(low);
}

int main(){
    int n;
    cin >> n;
    while(n--){
        int x, v;
        cin >> x >> v;
        carros.push_back(make_pair(x, v));
    }
    printf("%.7f", func());
}
