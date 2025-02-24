#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int state = 0;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char cur;
    string lexeme;
    while((cur=cin.get())!=EOF){
        //ignore blank
        if((cur == '\n'|| cur == '\r'|| cur == '\t'|| cur==' ') && !state)
            continue;
        switch (state)
        {
        case 0:
            if(cur=='*'){
                state=1; lexeme+=cur;
            }
            else if(cur=='+'){
                state=1; lexeme+=cur;
            }
            else if(cur=='-'){
                state=1; lexeme+=cur;
            }
            else if(cur=='/'){
                state=1; lexeme+=cur;
            }
            else if(cur=='0'){
                state=5; lexeme+=cur;
            }
            else if(cur=='1'){
                state=5; lexeme+=cur;
            }
            else if(cur=='2'){
                state=5; lexeme+=cur;
            }
            else if(cur=='3'){
                state=5; lexeme+=cur;
            }
            else if(cur=='4'){
                state=5; lexeme+=cur;
            }
            else if(cur=='5'){
                state=5; lexeme+=cur;
            }
            else if(cur=='6'){
                state=5; lexeme+=cur;
            }
            else if(cur=='7'){
                state=5; lexeme+=cur;
            }
            else if(cur=='8'){
                state=5; lexeme+=cur;
            }
            else if(cur=='9'){
                state=5; lexeme+=cur;
            }
            else if(cur==':'){
                state=15; lexeme+=cur;
            }
            else if(cur==';'){
                state=16; lexeme+=cur;
            }
            else if(cur=='<'){
                state=17; lexeme+=cur;
            }
            else if(cur=='='){
                state=17; lexeme+=cur;
            }
            else if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=49; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=53; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=62; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=64; lexeme+=cur;
            }
            else if(cur=='u'){
                state=65; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=67; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='{'){
                state=71; lexeme+=cur;
            }
            else
            {
                cout<<"unable to parse word:"<<lexeme;
                return 0;
            }break;
        case 1:
            {
                cout<<"word:"<<lexeme<<" parse result:op"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 5:
            if(cur=='0'){
                state=5; lexeme+=cur;
            }
            else if(cur=='1'){
                state=5; lexeme+=cur;
            }
            else if(cur=='2'){
                state=5; lexeme+=cur;
            }
            else if(cur=='3'){
                state=5; lexeme+=cur;
            }
            else if(cur=='4'){
                state=5; lexeme+=cur;
            }
            else if(cur=='5'){
                state=5; lexeme+=cur;
            }
            else if(cur=='6'){
                state=5; lexeme+=cur;
            }
            else if(cur=='7'){
                state=5; lexeme+=cur;
            }
            else if(cur=='8'){
                state=5; lexeme+=cur;
            }
            else if(cur=='9'){
                state=5; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:number"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 15:
            if(cur=='='){
                state=82; lexeme+=cur;
            }
            else
            {
                cout<<"unable to parse word:"<<lexeme;
                return 0;
            }break;
        case 16:
            {
                cout<<"word:"<<lexeme<<" parse result:mark"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 17:
            {
                cout<<"word:"<<lexeme<<" parse result:relationOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 19:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 49:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=135; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=136; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 53:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=137; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 62:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=138; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 64:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=139; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 65:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=140; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 67:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=141; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 71:
            if(cur=='}'){
                state=143; lexeme+=cur;
            }
            else
            {
                state=71;
                if(cur=='\r'||cur=='\n') lexeme+=" ";
                else lexeme+=cur;
            }break;
        case 82:
            {
                cout<<"word:"<<lexeme<<" parse result:assignOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 135:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=144; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 136:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=137; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 137:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:reserve_word"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 138:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=146; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=147; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 139:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=148; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 140:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=149; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 141:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=150; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 143:
            {
                cout<<"word:"<<lexeme<<" parse result:note"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 144:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=137; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 146:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=137; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 147:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=153; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 148:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=137; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 149:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=155; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 150:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=156; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 153:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=157; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 155:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=137; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 156:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=137; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=19; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 157:
            if(cur=='A'){
                state=19; lexeme+=cur;
            }
            else if(cur=='B'){
                state=19; lexeme+=cur;
            }
            else if(cur=='C'){
                state=19; lexeme+=cur;
            }
            else if(cur=='D'){
                state=19; lexeme+=cur;
            }
            else if(cur=='E'){
                state=19; lexeme+=cur;
            }
            else if(cur=='F'){
                state=19; lexeme+=cur;
            }
            else if(cur=='G'){
                state=19; lexeme+=cur;
            }
            else if(cur=='H'){
                state=19; lexeme+=cur;
            }
            else if(cur=='I'){
                state=19; lexeme+=cur;
            }
            else if(cur=='J'){
                state=19; lexeme+=cur;
            }
            else if(cur=='K'){
                state=19; lexeme+=cur;
            }
            else if(cur=='L'){
                state=19; lexeme+=cur;
            }
            else if(cur=='M'){
                state=19; lexeme+=cur;
            }
            else if(cur=='N'){
                state=19; lexeme+=cur;
            }
            else if(cur=='O'){
                state=19; lexeme+=cur;
            }
            else if(cur=='P'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='R'){
                state=19; lexeme+=cur;
            }
            else if(cur=='S'){
                state=19; lexeme+=cur;
            }
            else if(cur=='T'){
                state=19; lexeme+=cur;
            }
            else if(cur=='U'){
                state=19; lexeme+=cur;
            }
            else if(cur=='V'){
                state=19; lexeme+=cur;
            }
            else if(cur=='W'){
                state=19; lexeme+=cur;
            }
            else if(cur=='X'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=19; lexeme+=cur;
            }
            else if(cur=='a'){
                state=19; lexeme+=cur;
            }
            else if(cur=='b'){
                state=19; lexeme+=cur;
            }
            else if(cur=='c'){
                state=19; lexeme+=cur;
            }
            else if(cur=='d'){
                state=19; lexeme+=cur;
            }
            else if(cur=='e'){
                state=19; lexeme+=cur;
            }
            else if(cur=='f'){
                state=19; lexeme+=cur;
            }
            else if(cur=='g'){
                state=19; lexeme+=cur;
            }
            else if(cur=='h'){
                state=19; lexeme+=cur;
            }
            else if(cur=='i'){
                state=19; lexeme+=cur;
            }
            else if(cur=='j'){
                state=19; lexeme+=cur;
            }
            else if(cur=='k'){
                state=19; lexeme+=cur;
            }
            else if(cur=='l'){
                state=19; lexeme+=cur;
            }
            else if(cur=='m'){
                state=19; lexeme+=cur;
            }
            else if(cur=='n'){
                state=19; lexeme+=cur;
            }
            else if(cur=='o'){
                state=19; lexeme+=cur;
            }
            else if(cur=='p'){
                state=19; lexeme+=cur;
            }
            else if(cur=='q'){
                state=19; lexeme+=cur;
            }
            else if(cur=='r'){
                state=19; lexeme+=cur;
            }
            else if(cur=='s'){
                state=19; lexeme+=cur;
            }
            else if(cur=='t'){
                state=137; lexeme+=cur;
            }
            else if(cur=='u'){
                state=19; lexeme+=cur;
            }
            else if(cur=='v'){
                state=19; lexeme+=cur;
            }
            else if(cur=='w'){
                state=19; lexeme+=cur;
            }
            else if(cur=='x'){
                state=19; lexeme+=cur;
            }
            else if(cur=='y'){
                state=19; lexeme+=cur;
            }
            else if(cur=='z'){
                state=19; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:identifier"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
            default:
                break;
        }
    }
}
