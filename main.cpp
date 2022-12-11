#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
void culoare (int culoarea)
{
    srand(static_cast <unsigned int> (time(0)));
    culoarea= rand()%4+1;
    if(culoarea==1)
        cout<<"INIMA";
    else if(culoarea==2)
        cout<<"ROMB";
    else if(culoarea==3)
        cout<<"PICA";
    else if(culoarea==4)
        cout<<"TREFLA";
}
void cartea (int mana)
{

    int culoarea;
    if(mana==1 or mana==11)
        cout<<"un AS DE ",culoare(culoarea);
    if(mana==2)
        cout<<"un DOI DE ",culoare(culoarea);
    if(mana==3)
        cout<<"un TREI DE ",culoare(culoarea);
    if(mana==4)
        cout<<"un PATRU DE ",culoare(culoarea);
    if(mana==5)
        cout<<"un CINCI DE ",culoare(culoarea);
    if(mana==6)
        cout<<"un SASE DE ",culoare(culoarea);
    if(mana==7)
        cout<<"un SAPTE DE ",culoare(culoarea);
    if(mana==8)
        cout<<"un OPT DE ",culoare(culoarea);
    if(mana==9)
        cout<<"un NOUA DE ",culoare(culoarea);
    if(mana==10)
        cout<<"un ZECE DE ",culoare(culoarea);
    if(mana==12)
        cout<<"un VALET DE ",culoare(culoarea);
    if(mana==13)
        cout<<"o DAMA DE ",culoare(culoarea);
    if(mana==14)
        cout<<"un POPA DE ",culoare(culoarea);

}
int main()
{


    srand(static_cast <unsigned int> (time(0)));
    int  dealer,mana1,mana2,n=0,n2=0,alegere=1,a;
    char nume[100],nume2[100];
    cout<<"Numele primului jucator ";
    cin.getline(nume,100);
    cout<<"Numele Al doilea jucator jucator ";
    cin.getline(nume2,100);
    cout<<"--------------------------"<<endl;
    cout<<"       MASA INITIALA      "<<endl;
    cout<<"--------------------------"<<endl;
    dealer=rand() % 21 +1;
    cout<<"DEALER:"<<dealer<<" puncte"<<endl;
    mana1 = rand() % 14 +1;
    if(mana1==1 or mana1==11)
    { cout<<"Prima carte a ta este ";cartea(mana1);cout<<" alege cum vrei sa o folosesti(1/11)";
        cin>>a;
        if(a==1)
            mana1=1;
        else
            mana1=11;
    }
    int carte;

    cout<<nume<<" : "<<mana1<< " puncte"<<endl;
    cout<<" Mai ceri o carte?(1/0)"<<endl;
    while(alegere!=0 and mana1<21)
    {
        cin>>alegere;

        if(alegere==1 && mana1<21)
        {
            carte=rand() % 14 +1;
            if(carte==1 or carte==11)
            {
                 cout<<"ti-a picat un";cartea(carte);cout<<" ,alege cum sa il folosesti(1/11)";
                 a=0;
                 cin>>a;
                 if(a==1)
                    carte=1;
                 else carte=11;

            }
            mana1=mana1+carte;

        }
        if( mana1>21)
           {cout<<nume<<" ,ti-a picat ";cartea(carte);cout<<" si ai pierdut!:(";n=1;}
        else if( mana1==21)
            {cout<<nume<<" ,ti-a picat ";cartea(carte);cout<<" si ai facut BLACKJACK!!:)";}
        else if (mana1<21 && alegere!=0  )
        {
        if(carte!=1 or carte!=11)
        {

            cout<<nume<<" ,ti-a picat ";
            cartea(carte);
            cout<<"  ,sigur mai vrei o carte?(1/0)";
            }
        }


    }
    cout<<endl;
    a=0;
    alegere=22111;
    mana2 = rand() % 14 +1;
     if(mana2==1 and mana2==11)
    { cout<<"Prima carte a ta este ";cartea(mana2);cout<<" alege cum vrei sa o folosesti(1/11)";
        cin>>a;
        if(a==1)
            mana2=1;
        else
            mana2=11;
    }
    cout<<nume2<<" : "<<mana2<< "puncte"<<endl;
    cout<<" Mai ceri o carte?(1/0)"<<endl;
    while(alegere!=0 and mana2<21)
    {
        cin>>alegere;

        if(alegere==1 && mana2<21)
        {
            carte=rand() % 14 +1;
            if(carte==1 or carte==11)
            {
                 cout<<"ti-a picat un";cartea(carte);cout<<" ,alege cum sa il folosesti(1/11)";
                 a=0;
                 cin>>a;
                 if(a==1)
                    carte=1;
                 else carte=11;

            }
            mana2=mana2+carte;

        }
        if( mana2>21)
           {cout<<nume2<<" ,ti-a picat ";cartea(carte);cout<<" si ai pierdut!:(";n2=1;}
        else if( mana2==21)
             {cout<<nume2<<" ,ti-a picat ";cartea(carte);cout<<" si ai facut BLACKJACK!!:)";}
        else if (mana2<21 && alegere==1)
             {
                if(carte!=11 or carte!=11)
            {cout<<nume2<<" ,ti-a picat ";
            cartea(carte);
            cout<<"  ,sigur mai vrei o carte?(1/0)";}
        }


    }
    cout<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"       MASA FINALA        "<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"DEALER: "<<dealer<<" puncte"<<endl;
    cout<<nume<<" : "<<mana1<<" puncte"<<endl;
    cout<<nume2<<" : "<<mana2<<" puncte"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"Castigatorul acestui meci este :";
    if(dealer>mana1 && dealer>mana2)
        cout<<"Dealer-ul";
    else if(n==1 and dealer>mana2)
        cout<<"Dealer-ul";
    else if(n2==1 and dealer>mana1)
        cout<<"Dealer-ul";
    else if(n2==1 and n==1)
        cout<<"Dealer-ul";
    else  if(n2==1 and mana1>dealer)
        cout<<nume;
        else if(mana1>dealer && mana1>mana2)
        cout<<nume;
    else   if(n==1 and mana2>dealer)
        cout<<nume2;
          else if(mana2>dealer && (mana2>mana1 && n2!=1))
        cout<<nume2;
    else
        cout<<"A fost egalitate.";
    cout<<endl;
    return 0;

}
