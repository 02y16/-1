#include <stdio.h>
#include <math.h>
double ox[1] = {0.0}, oy[1] = {0.0}, r[1] = {0.0};
double dis(double x, double y){
    double d = (x - ox[0]) * (x - ox[0]) + (y - oy[0]) * (y - oy[0]);
    return d;
}
void circle1(double x, double y){
    ox[0] = x;
    oy[0] = y;
    r[0] = 0.0;
}
void circle2(double x1, double x2, double y1, double y2){
    ox[0] = (x1 + x2) / 2.0;
    oy[0] = (y1 + y2) / 2.0;
    r[0] = dis(x1, y1);
}
void circle3(double x1, double x2, double x3, double y1, double y2, double y3){
        double a = x1 - x2;
        double b = y1 - y2;
        double c = x1 - x3;
        double d = y1 - y3;
        double e = (a * (x1 + x2) + b * (y1 + y2)) / 2.0;
        double f = (c * (x1 + x3) + d * (y1 + y3)) / 2.0;
        ox[0] = -(d * e - b * f) / (b * c - a * d);
        oy[0] = -(a * f - c * e) / (b * c - a * d);
        r[0] = dis(x1, y1);
}

int main(){
        int n;
        scanf("%d", &n);
        double x[n], y[n];
        for(int i = 0; i < n; i++)scanf("%lf %lf", &x[i], &y[i]);
        for(int i = 0; i < n; i++){
            double d = dis(x[i], y[i]);
            if (d > r[0]){    //P[i] 不在 C 内
                circle1(x[i], y[i]);
                for(int j = 0; j < i; j++){
                    d = dis(x[j], y[j]);
                    if (d > r[0]){   //P[j] 不在 C 内
                        circle2(x[i], x[j], y[i], y[j]);
                        for(int k = 0; k < j; k++){
                            d = dis(x[k], y[k]);
                            if (d > r[0]){   //P[k] 不在 C 内
                                circle3(x[i], x[j], x[k], y[i], y[j], y[k]);
                            }
                        }
                    }
                }
            }
        }
        printf("%.10lf\n%.10lf %.10lf \n", sqrt(r[0]), ox[0], oy[0]);
        return 0;
}