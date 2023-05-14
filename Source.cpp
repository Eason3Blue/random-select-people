#include<iostream>
#include<time.h>
#include<string>
using namespace std;
int n,i;
string name[1000000];//1e6
int main(){
    freopen("list.in","r",stdin);
    freopen("result.out","w",stdout);

    cin>>n;
    for(i=0;i<=n;i++)  getline(cin,name[i]);
    srand(time(NULL));
    while(n>0){
        int c=rand()%n+1;
        cout<<name[c]<<endl;
        name[c]=name[n-1];
        n--;
    }
    cout<<name[1];

    fclose(stdin);
    fclose(stdout);
    return 0;
}