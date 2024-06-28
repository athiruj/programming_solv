#include <iostream>
using namespace std;
int arr_s[10] = {1, 2, 3, 4};
int arr_b[10] = {7, 6, 8, 9};
int temp = 1000000000;
int n = 4;
int abs(int nb)
{
	return (nb < 0 ? nb *= -1 : nb);
}
int perket(int i = -1,int s=1,int b=0){
   if ((abs(s - b)<temp && s != 1 && b != 0)){
    temp = abs(s - b);
  }
  if(i==n-1){
    return temp;
  }
  perket(i+1,s,b);
  perket(i+1,s*arr_s[i+1],b+arr_b[i+1]);
  return (0);
}
int main(){
//   cin>>n;
//   for(int i =0 ; i<n ; i++){
//         cin>>arr_s[i]>>arr_b[i];
//     }
  if(n==1){
    cout<<abs(arr_s[0]-arr_b[0]);
  }else{
    cout<<perket(0);
  }
}