//week05_2_processing_do_re_mi_serial_keyPressed_keyReleased
//修改自week05_1_processing_do_re_mi_serial
//按多久、叫多久、放開、就不叫了，不是永遠0.1秒
import processing.serial.*;  // 使用USB Serial的外掛
Serial myPort;  // 將用myPort來傳USB Serial資料
void setup(){
  size(300,200);//隨便視窗
  myPort=new Serial(this,"COM4",9600);//COM自己查
}
void draw(){
}
int p1=0,p2=0,p3=0;//變數紀錄按鍵，一開始沒按，下面做修改
void keyPressed(){
  if (p1==0 && key=='1') myPort.write('1');//之前沒按，現在按
  if (p2==0 && key=='2') myPort.write('2');
  if (p3==0 && key=='3') myPort.write('3');
  if (p1==0 && key=='1') p1=1;//0代表沒有按 1代表按下去
  if (p2==0 && key=='2') p2=1;
  if (p3==0 && key=='3') p3=1;
  }
 
 void keyReleased(){
 if(key=='1') p1=0;//放開1鍵
 if(key=='2') p2=0;//放開2鍵
 if(key=='3') p3=0;//放開3鍵
 myPort.write('0');//告訴Arduino不要發出任何聲音!
 }
