#include <iostream>
#include <fstream>
using namespace std;

struct roomType
{
    string description;
};

void TreeDescription();
void IslandDescription();
void IntroDescription();
void TopDeckDescription();
void WheelDescription();
void WheelGorillaDescription();
void BottomDeckDescription();
void GalleyDescription();
void BrigDescription();
void CaptainQuartersDescription();
void CargoHoldDescription();

int main ()
{
  CargoHoldDescription ();
}

void TreeDescription ()
{
  roomType Tree;
  ifstream myfile ("Tree Description");
    getline(myfile,Tree.description);
    cout<<Tree.description;

}

void IslandDescription ()
{
  roomType Island;
  ifstream myfile ("Island Description");
    getline(myfile,Island.description);
    cout<<Island.description;

}

void IntroDescription()
{
    roomType Intro;
    ifstream myfile ("Intro Description");
    getline(myfile,Intro.description);
    cout<<Intro.description;
    
}

void TopDeckDescription()
{
    roomType TopDeck;
    ifstream myfile ("Top Deck Description");
    getline(myfile,TopDeck.description);
    cout<<TopDeck.description;
    
    
}

void WheelDescription()
{
    roomType Wheel;
    ifstream myfile ("Wheel Description");
    getline(myfile,Wheel.description);
    cout<<Wheel.description;
    
}

void WheelGorillaDescription()
{
    roomType WheelGorilla;
    ifstream myfile ("Wheel Gorilla Description");
    getline(myfile,WheelGorilla.description);
    cout<<WheelGorilla.description;
}

void BottomDeckDescription()
{
    roomType BottomDeck;
    ifstream myfile("Bottom Deck Description");
    getline(myfile,BottomDeck.description);
    cout<<BottomDeck.description;
}

void GalleyDescription()
{
    roomType Galley;
    ifstream myfile("Galley Description");
    getline(myfile,Galley.description);
    cout<<Galley.description;
}

void BrigDescription()
{
    roomType Brig;
    ifstream myfile("Brig Description");
    getline(myfile,Brig.description);
    cout<<Brig.description;
    
}

void CaptainQuartersDescription()
{
    roomType CaptainQuarters;
    ifstream myfile ("Captain's Quarters Description");
    getline(myfile,CaptainQuarters.description);
    cout<<CaptainQuarters.description;
    
}

void CargoHoldDescription()
{
    roomType CargoHold;
    ifstream myfile("Cargo Hold Description");
    getline(myfile,CargoHold.description);
    cout<<CargoHold.description;
}





