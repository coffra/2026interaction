//week06_4_processing_rotate_serial_myPort_available_read
//修改自week06_3_processing_rotate_translate_rotate_rect
import processing.serial.*;
Serial myPort;
void setup(){
  size(500,500);
  myPort=new Serial(this,"COM4",9600);//看自己的COM
}
int now=0;//現在的選轉角度
int dd=1;//now++跟now--用now+=dd其中dd是1or-1
void draw(){
  if(myPort.available()>0){//如果有資料要讀
    if(myPort.read()=='1') dd=-1;//讀入的資料是字母'1'
    else dd=1;
  }
  background(0);//黑色背景
  translate(250,250);//往右移、往下移
  now+=dd;
  rotate(radians(now));//持續轉動，讓mouse點擊能左右轉
  rect(-200,-200,400,400);//座標奇怪的四邊形

}
void mousePressed(){//暫用mouse點擊，來修改dd轉動改變量
if (dd==1) dd=-1;//正的，變負的
  else dd=1;//負的，變正的
}
