//week07_4_processing_serial_audio_do_re_mi
//修改自week05_3_processing_do_re_mi_serial_draw
//修改自week07_3_processing_audio_do_re_mi(主要程式)
import processing.serial.*;//加這行
Serial myPort;//加這行
import processing.sound.*;
SoundFile Do,Re,Mi;//有3個變數Do,Ra,Mi
void setup(){
  size(300,200);
  myPort=new Serial(this,"COM4",9600);
  //要把三個聲音(do.wav、re.wav、mi.wav)檔都拉到程式裡
  Do=new SoundFile(this,"do.wav");
  Re=new SoundFile(this,"re.wav");
  Mi=new SoundFile(this,"mi.wav");
}
void draw() {
  rect(0,0,100,200);
  rect(100,0,100,200);
  rect(200,0,100,200);
}
void mousePressed() {
  if (mouseX<100){
    Do.play();//加這行
    myPort.write('1');
  }else if(mouseX<200){
    Re.play();//加這行
    myPort.write('2');
  }else if(mouseX<300){
    Mi.play();//加這行
    myPort.write('3');
  }
}
void mouseReleased(){//加這行
    myPort.write('0');//加這行
 }
