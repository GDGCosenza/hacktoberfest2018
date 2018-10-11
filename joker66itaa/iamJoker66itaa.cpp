#include <iostream>
#include <string>

using namespace std;

string order(string f);

int main()
{
    string parola;
    cout<<"Inserisci una parola da ordinare"<<endl;
    cin>>parola;
    parola=order(parola);
    cout<<"Ordinata: "<<parola;
    return 0;
}


string order(string f)
{
    int indice=0;
    for(int i=0;i<f.size();i++)
    {
        indice=i;
        for(int j=i+1;j<f.size();j++)
        {
            if(f[indice]>f[j])
            {
                indice=j;
            }
        }
        if(indice!=i)
        {
            char temp=f[indice];
            f[indice]=f[i];
            f[i]=temp;
        }
    }
    return f;
}