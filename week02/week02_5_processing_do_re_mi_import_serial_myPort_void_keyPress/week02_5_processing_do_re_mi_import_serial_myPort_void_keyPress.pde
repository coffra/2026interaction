// week02_5_processing_do_re_mi_import_serial_myPort_void_keyPressed_write
// 我想要把Arduino跟Processing結合
// 在Processing按下key 1 2 3對應Arduino的Do Re Mi使用USB Serial
//因為只有1條USB Serial線, 要記得按下「方塊」停止占用執行
import processing.serial.*;  // 使用USB Serial的外掛
Serial myPort;  // 將用myPort來傳USB Serial資料
void setup(){
  size(300,200);//隨便視窗
  myPort=new Serial(this,"COM4",9600);//COM自己查
}

void draw(){

}
void keyPressed(){//按數字鍵時，會利用USB Serial傳資料到電路板
  if(key=='1') myPort.write('1');
  if(key=='2') myPort.write('2');
  if(key=='3') myPort.write('3');
} 
