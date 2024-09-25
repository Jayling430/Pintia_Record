#include <stdio.h> 
#include <math.h> 
   /* scanf("%lf%lf",&a,&b); //输入两个实数
     printf("sin(%lf)=%lf\n",a,sin(a*PI/180));//输出角度a的正弦值,a*PI/180为弧度值*/
    // printf("cos(%lf)=%lf\n",a,cos(a*PI/180));//输出角度a的余弦值,a*PI/180为弧度值*/
    // printf("exp(%lf)=%lf\n",a,exp(a));//输出e的a次方 
    // printf("log(%lf)=%lf\n",a,log(a));//输出以e为底a的对数 
     //printf("log10(%lf)=%lf\n",a,log10(a));    //输出以10为底a的对数
     //printf("pow(%lf,%lf)=%lf\n",a,b,pow(a,b));//输出a的b次方 
int main(){
    double x;
    scanf("%lf",&x);
    double ans;
    ans = exp(2*x)+sin(pow(x,3.5))+log(x)-1;
    printf("%.6lf",ans);
    return 0;
}