//
//  main.cpp
//  saisyuukadai
//
//  Created by 橋場 弦 on 2020/08/06.
//  Copyright © 2020 橋場 弦. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
//----------------------------------------------------------------------------
struct Meibutu
{
    string Haru;
    string Natu;
    string Aki;
    string Fuyu;
};
//----------------------------------------------------------------------------
vector <Meibutu> v;
int i=0;
void Readdata()
{
    ifstream datafile("/Users/hashiba/Library/Developer/Xcode/DerivedData/txtxt-gkbqzzuaybwxzycuvppwyjrswiwk/Build/Products/Debug/meibutu.txt");
       
       string spring;
       string summer;
       string autumn;
       string winter;
       
    while(datafile>> spring >> summer >> autumn >> winter)
    {
           v.emplace_back();
           v[i].Haru=spring;
           v[i].Natu=summer;
           v[i].Aki=autumn;
           v[i].Fuyu=winter;
           ++i;
    }
  
}
//----------------------------------------------------------------------------
string meibutu;
vector <int>v1;
vector<int>v2;
vector<int>v3{};
int num;
void Search(string KEN)
{
    if (KEN =="hokkaidou") num=0;
    if (KEN =="aomori")num=1;
    if (KEN =="iwate")num=2;
    if (KEN =="miyagi")num=3;
    if (KEN =="akita")num=4;
    if (KEN =="yamagata") num=5;
    if (KEN =="fukushima") num=6;
    if (KEN =="ibaragi") num=7;
    if (KEN =="ibaraki") num=7;
    if (KEN =="totigi") num=8;
    if (KEN =="tochigi") num=8;
    if (KEN =="gunma") num=9;
    if (KEN =="saitama") num=10;
    if (KEN =="tiba") num=11;
    if (KEN =="chiba") num=11;
    if (KEN =="toukyou") num=12;
    if (KEN =="tokyo") num=12;
    if (KEN =="kanagawa") num=13;
    if (KEN =="niigata") num=14;
    if (KEN =="toyama") num=15;
    if (KEN =="ishikawa") num=16;
    if (KEN =="hukui") num=17;
    if (KEN =="fukui") num=17;
    if (KEN =="yamanashi") num=18;
    if (KEN =="nagano") num=19;
    if (KEN =="gihu") num=20;
    if (KEN =="gifu") num=20;
    if (KEN =="shizuoka") num=21;
    if (KEN =="aiti") num=22;
    if (KEN =="aichi") num=22;
    if (KEN =="mie") num=23;
    if (KEN =="shiga") num=24;
    if (KEN =="kyouto") num=25;
    if (KEN =="oosaka") num=26;
    if (KEN =="osaka") num=26;
    if (KEN =="hyougo") num=27;
    if (KEN =="nara") num=28;
    if (KEN =="wakayama") num=29;
    if (KEN =="tottori") num=30;
    if (KEN =="shimane") num=31;
    if (KEN =="okayama") num=32;
    if (KEN =="hiroshima") num=33;
    if (KEN =="yamaguti") num=34;
    if (KEN =="yamaguchi") num=34;
    if (KEN =="tokushima") num=35;
    if (KEN =="kagawa") num=36;
    if (KEN =="ehime") num=37;
    if (KEN =="kouti") num=38;
    if (KEN =="kouchi") num=38;
    if (KEN =="hukuoka") num=39;
    if (KEN =="fukuoka") num=39;
    if (KEN =="saga") num=40;
    if (KEN =="nagasaki") num=41;
    if (KEN =="kumamoto") num=42;
    if (KEN =="ooita") num=43;
    if (KEN =="oita") num=43;
    if (KEN =="miyazaki") num=44;
    if (KEN =="kagoshima") num=45;
    if (KEN =="okinawa") num=46;
     if (KEN =="hokkaidou") v1.push_back(1);
     if (KEN =="aomori")v1.push_back(1);
     if (KEN =="iwate")v1.push_back(1);
     if (KEN =="miyagi")v1.push_back(1);
     if (KEN =="akita")v1.push_back(1);
     if (KEN =="yamagata") v1.push_back(1);
     if (KEN =="fukushima") v1.push_back(1);
     if (KEN =="ibaragi") v1.push_back(1);
     if (KEN =="ibaraki") v1.push_back(1);
     if (KEN =="totigi") v1.push_back(1);
     if (KEN =="tochigi") v1.push_back(1);
     if (KEN =="saitama") v1.push_back(1);
     if (KEN =="tiba") v1.push_back(1);
     if (KEN =="chiba")v1.push_back(1);
     if (KEN =="toukyou") v1.push_back(1);
     if (KEN =="tokyo")v1.push_back(1);
     if (KEN =="kanagawa") v1.push_back(1);
     if (KEN =="niigata") v1.push_back(1);
     if (KEN =="toyama") v1.push_back(1);
     if (KEN =="ishikawa") v1.push_back(1);
     if (KEN =="hukui") v1.push_back(1);
     if (KEN =="fukui")v1.push_back(1);
     if (KEN =="yamanashi") v1.push_back(1);
     if (KEN =="nagano") v1.push_back(1);
     if (KEN =="gihu")v1.push_back(1);
     if (KEN =="gifu")v1.push_back(1);
     if (KEN =="shizuoka") v1.push_back(1);
     if (KEN =="aiti")v1.push_back(1);
     if (KEN =="aichi") v1.push_back(1);
     if (KEN =="mie") v1.push_back(1);
     if (KEN =="shiga") v1.push_back(1);
     if (KEN =="kyouto") v1.push_back(1);
     if (KEN =="oosaka") v1.push_back(1);
     if (KEN =="osaka") v1.push_back(1);
     if (KEN =="hyougo") v1.push_back(1);
     if (KEN =="nara")v1.push_back(1);
     if (KEN =="wakayama") v1.push_back(1);
     if (KEN =="tottori") v1.push_back(1);
     if (KEN =="shimane")v1.push_back(1);
     if (KEN =="okayama") v1.push_back(1);
     if (KEN =="hiroshima")v1.push_back(1);
     if (KEN =="yamaguti") v1.push_back(1);
     if (KEN =="yamaguchi") v1.push_back(1);
     if (KEN =="tokushima")v1.push_back(1);
     if (KEN =="kagawa") v1.push_back(1);
     if (KEN =="ehime") v1.push_back(1);
     if (KEN =="kouti") v1.push_back(1);
     if (KEN =="kouchi")v1.push_back(1);
     if (KEN =="hukuoka")v1.push_back(1);
     if (KEN =="fukuoka") v1.push_back(1);
     if (KEN =="saga")v1.push_back(1);
     if (KEN =="nagasaki")v1.push_back(1);
     if (KEN =="kumamoto") v1.push_back(1);
     if (KEN =="ooita") v1.push_back(1);
     if (KEN =="oita") v1.push_back(1);
     if (KEN =="miyazaki") v1.push_back(1);
     if (KEN =="kagoshima") v1.push_back(1);
     if (KEN =="okinawa") v1.push_back(1);
}
//----------------------------------------------------------------------------
void Search2(string KISETU)
{
    if(KISETU == "haru") meibutu= v[num].Haru;
    if(KISETU == "natu") meibutu= v[num].Natu;
    if(KISETU == "aki") meibutu= v[num].Aki;
    if(KISETU == "fuyu") meibutu= v[num].Fuyu;
    if(KISETU == "huyu") meibutu= v[num].Fuyu;
     if(KISETU == "haru") v2.push_back(1);
     if(KISETU == "natu") v2.push_back(1);
     if(KISETU == "aki") v2.push_back(1);
     if(KISETU == "fuyu") v2.push_back(1);
     if(KISETU == "huyu") v2.push_back(1);
}
//----------------------------------------------------------------------------
int main ()
{
    Readdata();
    string aa;
    string bb;
    cout<<"ローマ字入力してね！\n";
    cout <<"どこ行く？\n";
    cin >> aa;
    cout  <<"いつ行く？\n";
    cin >> bb;
    
    Search(aa);
    Search2(bb);
   
    if (v1 == v3) cout<<"すまんなわいあほやから県名がわからんわ。福島県なら”fukushima”ってな感じで頼むわw\n";
    if (v2 == v3)
        cout<<"すまんなわいあほすぎて季節がわからんわ。夏は”natu”春は”haru”秋は”aki”冬は”fuyu”でもう一回試してくれ。\n";
    if (v1!=v3&&v2!=v3)
    cout <<"それなら"<<meibutu<<"がおすすめなんやておま。\n";
}
//----------------------------------------------------------------------------
