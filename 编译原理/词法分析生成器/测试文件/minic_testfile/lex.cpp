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
            if(cur=='!'){
                state=1; lexeme+=cur;
            }
            else if(cur=='%'){
                state=2; lexeme+=cur;
            }
            else if(cur=='('){
                state=3; lexeme+=cur;
            }
            else if(cur==')'){
                state=3; lexeme+=cur;
            }
            else if(cur=='*'){
                state=2; lexeme+=cur;
            }
            else if(cur=='+'){
                state=2; lexeme+=cur;
            }
            else if(cur==','){
                state=3; lexeme+=cur;
            }
            else if(cur=='-'){
                state=2; lexeme+=cur;
            }
            else if(cur=='/'){
                state=9; lexeme+=cur;
            }
            else if(cur=='0'){
                state=10; lexeme+=cur;
            }
            else if(cur=='1'){
                state=10; lexeme+=cur;
            }
            else if(cur=='2'){
                state=10; lexeme+=cur;
            }
            else if(cur=='3'){
                state=10; lexeme+=cur;
            }
            else if(cur=='4'){
                state=10; lexeme+=cur;
            }
            else if(cur=='5'){
                state=10; lexeme+=cur;
            }
            else if(cur=='6'){
                state=10; lexeme+=cur;
            }
            else if(cur=='7'){
                state=10; lexeme+=cur;
            }
            else if(cur=='8'){
                state=10; lexeme+=cur;
            }
            else if(cur=='9'){
                state=10; lexeme+=cur;
            }
            else if(cur==';'){
                state=3; lexeme+=cur;
            }
            else if(cur=='<'){
                state=21; lexeme+=cur;
            }
            else if(cur=='='){
                state=22; lexeme+=cur;
            }
            else if(cur=='>'){
                state=23; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='['){
                state=3; lexeme+=cur;
            }
            else if(cur==']'){
                state=3; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=56; lexeme+=cur;
            }
            else if(cur=='e'){
                state=57; lexeme+=cur;
            }
            else if(cur=='f'){
                state=58; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=61; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=70; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=74; lexeme+=cur;
            }
            else if(cur=='w'){
                state=75; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='{'){
                state=3; lexeme+=cur;
            }
            else if(cur=='}'){
                state=3; lexeme+=cur;
            }
            else
            {
                cout<<"unable to parse word:"<<lexeme;
                return 0;
            }break;
        case 1:
            if(cur=='='){
                state=81; lexeme+=cur;
            }
            else
            {
                cout<<"unable to parse word:"<<lexeme;
                return 0;
            }break;
        case 2:
            {
                cout<<"word:"<<lexeme<<" parse result:op"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 3:
            {
                cout<<"word:"<<lexeme<<" parse result:mark"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 9:
            if(cur=='/'){
                state=82; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:op"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 10:
            if(cur=='.'){
                state=83; lexeme+=cur;
            }
            else if(cur=='0'){
                state=10; lexeme+=cur;
            }
            else if(cur=='1'){
                state=10; lexeme+=cur;
            }
            else if(cur=='2'){
                state=10; lexeme+=cur;
            }
            else if(cur=='3'){
                state=10; lexeme+=cur;
            }
            else if(cur=='4'){
                state=10; lexeme+=cur;
            }
            else if(cur=='5'){
                state=10; lexeme+=cur;
            }
            else if(cur=='6'){
                state=10; lexeme+=cur;
            }
            else if(cur=='7'){
                state=10; lexeme+=cur;
            }
            else if(cur=='8'){
                state=10; lexeme+=cur;
            }
            else if(cur=='9'){
                state=10; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:num"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 21:
            if(cur=='='){
                state=81; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:relationOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 22:
            if(cur=='='){
                state=81; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:assignOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 23:
            if(cur=='='){
                state=81; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:relationOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 24:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 56:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 57:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=161; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 58:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=162; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 61:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=164; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 70:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=165; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 74:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=166; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 75:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=167; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 81:
            {
                cout<<"word:"<<lexeme<<" parse result:relationOp"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 82:
            if(cur=='.'){
                state=169; lexeme+=cur;
            }
            else
            {
                state=82;
                if(cur=='\r'||cur=='\n') lexeme+=" ";
                else lexeme+=cur;
            }break;
        case 83:
            if(cur=='0'){
                state=170; lexeme+=cur;
            }
            else if(cur=='1'){
                state=170; lexeme+=cur;
            }
            else if(cur=='2'){
                state=170; lexeme+=cur;
            }
            else if(cur=='3'){
                state=170; lexeme+=cur;
            }
            else if(cur=='4'){
                state=170; lexeme+=cur;
            }
            else if(cur=='5'){
                state=170; lexeme+=cur;
            }
            else if(cur=='6'){
                state=170; lexeme+=cur;
            }
            else if(cur=='7'){
                state=170; lexeme+=cur;
            }
            else if(cur=='8'){
                state=170; lexeme+=cur;
            }
            else if(cur=='9'){
                state=170; lexeme+=cur;
            }
            else
            {
                cout<<"unable to parse word:"<<lexeme;
                return 0;
            }break;
        case 161:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=180; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 162:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=181; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 164:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 165:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=183; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 166:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=184; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 167:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=185; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 169:
            {
                cout<<"word:"<<lexeme<<" parse result:note"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 170:
            if(cur=='0'){
                state=170; lexeme+=cur;
            }
            else if(cur=='1'){
                state=170; lexeme+=cur;
            }
            else if(cur=='2'){
                state=170; lexeme+=cur;
            }
            else if(cur=='3'){
                state=170; lexeme+=cur;
            }
            else if(cur=='4'){
                state=170; lexeme+=cur;
            }
            else if(cur=='5'){
                state=170; lexeme+=cur;
            }
            else if(cur=='6'){
                state=170; lexeme+=cur;
            }
            else if(cur=='7'){
                state=170; lexeme+=cur;
            }
            else if(cur=='8'){
                state=170; lexeme+=cur;
            }
            else if(cur=='9'){
                state=170; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:num"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 180:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 181:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=197; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 183:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=198; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 184:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 185:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=200; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 197:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 198:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=202; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 200:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
        case 202:
            if(cur=='0'){
                state=24; lexeme+=cur;
            }
            else if(cur=='1'){
                state=24; lexeme+=cur;
            }
            else if(cur=='2'){
                state=24; lexeme+=cur;
            }
            else if(cur=='3'){
                state=24; lexeme+=cur;
            }
            else if(cur=='4'){
                state=24; lexeme+=cur;
            }
            else if(cur=='5'){
                state=24; lexeme+=cur;
            }
            else if(cur=='6'){
                state=24; lexeme+=cur;
            }
            else if(cur=='7'){
                state=24; lexeme+=cur;
            }
            else if(cur=='8'){
                state=24; lexeme+=cur;
            }
            else if(cur=='9'){
                state=24; lexeme+=cur;
            }
            else if(cur=='A'){
                state=24; lexeme+=cur;
            }
            else if(cur=='B'){
                state=24; lexeme+=cur;
            }
            else if(cur=='C'){
                state=24; lexeme+=cur;
            }
            else if(cur=='D'){
                state=24; lexeme+=cur;
            }
            else if(cur=='E'){
                state=24; lexeme+=cur;
            }
            else if(cur=='F'){
                state=24; lexeme+=cur;
            }
            else if(cur=='G'){
                state=24; lexeme+=cur;
            }
            else if(cur=='H'){
                state=24; lexeme+=cur;
            }
            else if(cur=='I'){
                state=24; lexeme+=cur;
            }
            else if(cur=='J'){
                state=24; lexeme+=cur;
            }
            else if(cur=='K'){
                state=24; lexeme+=cur;
            }
            else if(cur=='L'){
                state=24; lexeme+=cur;
            }
            else if(cur=='M'){
                state=24; lexeme+=cur;
            }
            else if(cur=='N'){
                state=24; lexeme+=cur;
            }
            else if(cur=='O'){
                state=24; lexeme+=cur;
            }
            else if(cur=='P'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='R'){
                state=24; lexeme+=cur;
            }
            else if(cur=='S'){
                state=24; lexeme+=cur;
            }
            else if(cur=='T'){
                state=24; lexeme+=cur;
            }
            else if(cur=='U'){
                state=24; lexeme+=cur;
            }
            else if(cur=='V'){
                state=24; lexeme+=cur;
            }
            else if(cur=='W'){
                state=24; lexeme+=cur;
            }
            else if(cur=='X'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='Z'){
                state=24; lexeme+=cur;
            }
            else if(cur=='_'){
                state=24; lexeme+=cur;
            }
            else if(cur=='a'){
                state=24; lexeme+=cur;
            }
            else if(cur=='b'){
                state=24; lexeme+=cur;
            }
            else if(cur=='c'){
                state=24; lexeme+=cur;
            }
            else if(cur=='d'){
                state=24; lexeme+=cur;
            }
            else if(cur=='e'){
                state=24; lexeme+=cur;
            }
            else if(cur=='f'){
                state=24; lexeme+=cur;
            }
            else if(cur=='g'){
                state=24; lexeme+=cur;
            }
            else if(cur=='h'){
                state=24; lexeme+=cur;
            }
            else if(cur=='i'){
                state=24; lexeme+=cur;
            }
            else if(cur=='j'){
                state=24; lexeme+=cur;
            }
            else if(cur=='k'){
                state=24; lexeme+=cur;
            }
            else if(cur=='l'){
                state=24; lexeme+=cur;
            }
            else if(cur=='m'){
                state=24; lexeme+=cur;
            }
            else if(cur=='n'){
                state=24; lexeme+=cur;
            }
            else if(cur=='o'){
                state=24; lexeme+=cur;
            }
            else if(cur=='p'){
                state=24; lexeme+=cur;
            }
            else if(cur=='q'){
                state=24; lexeme+=cur;
            }
            else if(cur=='r'){
                state=24; lexeme+=cur;
            }
            else if(cur=='s'){
                state=24; lexeme+=cur;
            }
            else if(cur=='t'){
                state=24; lexeme+=cur;
            }
            else if(cur=='u'){
                state=24; lexeme+=cur;
            }
            else if(cur=='v'){
                state=24; lexeme+=cur;
            }
            else if(cur=='w'){
                state=24; lexeme+=cur;
            }
            else if(cur=='x'){
                state=24; lexeme+=cur;
            }
            else if(cur=='y'){
                state=24; lexeme+=cur;
            }
            else if(cur=='z'){
                state=24; lexeme+=cur;
            }
            else
            {
                cout<<"word:"<<lexeme<<" parse result:id"<<endl;
                state=0; lexeme="";
                cin.unget();
            }break;
            default:
                break;
        }
    }
}
