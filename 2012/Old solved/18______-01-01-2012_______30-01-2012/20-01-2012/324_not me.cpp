#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
vector <vector <int> > FAC (367);
 
void imprimir (int a)
{
    cout << a << " ";
}
 
 vector <int> multiplicacion_1 (vector <int> &A, int b)
{
    vector <int> R (A.size()+1, 0);
    for (int i = 0; i < A.size(); i++)
    {
        R[i+1] = (A[i]*b+R[i])/10;
        R[i] = (A[i]*b+R[i])%10;
    }
 
    return R;
}
 
 vector <int> suma (vector <int> &A, vector <int> &B)
 {
    vector <int> &mayor = (A.size() > B.size()) ? A : B;
    vector <int> &menor = (A.size() <= B.size()) ? A : B;
    vector <int> R (mayor.size()+1, 0);
 
    for (int i = 0; i < menor.size(); i++)
    {
        R[i+1] = (A[i]+B[i]+R[i])/10;
        R[i] = (A[i]+B[i]+R[i])%10;
 
    }
 
    for (int i = menor.size(); i < mayor.size(); i++)
    {
        R[i+1] = (mayor[i]+R[i])/10;
        R[i] = (mayor[i]+R[i])%10;
 
    }
    return R;
 }
 
vector <int> multiplicacion (vector <int> &A, vector <int> &B)
{
    vector <int> R (1, 0);
    vector <int> tmp;
    for (int i = 0; i < B.size(); i++)
    {
        tmp = multiplicacion_1 (A, B[i]);
        for (int j = 0; j < i; j++)
        {
            tmp = multiplicacion_1 (tmp, 10);
        }
        R = suma (R, tmp);
    }
    return R;
}
 
void factorial ()
{
    FAC[0] = vector <int> (1, 1);
    vector <int> tmp(3,0);
    int n;
    for (int i = 1; i <= 366; i++)
    {
        n = i;
        for (int j = 0; n; j++)
        {
            tmp[j] = n%10;
            n /= 10;
        }
        FAC[i] = multiplicacion (FAC[i-1], tmp);
    }
}
 
int main ()
{
    vector <int> A(3, 0);
    vector <int> B(1, 6);
 
    A[0] = 0;
    A[1] = 2;
    A[2] = 1;
 
    factorial ();
 
    int n;
    while (cin >> n)
    {
        if (!n) return 0;
 
        int i = FAC[n].size()-1;
        while (FAC[n][i] == 0) i--;
        vector <int> C (10, 0);
 
        for (int j = i; j >= 0; j--)
        {
            C[FAC[n][j]]++;
        }
 
        cout << n << "! --" << endl;
        cout << "   (0)    " << C[0];
        cout << "    (1)    " << C[1];
        cout << "    (2)    " << C[2];
        cout << "    (3)    " << C[3];
        cout << "    (4)    " << C[4]<<endl;
        cout << "   (5)    " << C[5];
        cout << "    (6)    " << C[6];
        cout << "    (7)    " << C[7];
        cout << "    (8)    " << C[8];
        cout << "    (9)    " << C[9]<<endl;
}
    return 0;
}
