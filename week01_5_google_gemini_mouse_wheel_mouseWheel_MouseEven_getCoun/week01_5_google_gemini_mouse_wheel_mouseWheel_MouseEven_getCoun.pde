// week01_5_google_gemini_mouse_wheel_mouseWheel_MouseEven_getCount
// google gemini: Processing 怎麼用到 mouse wheel
//把ai程式碼複製過來
float circleSize = 50;  // 宣告圓形大小
void setup() {
  size(500, 500);
  background(225);
}
void draw() {
  strokeWeight(circleSize);
  if(mousePressed){//滑鼠按下去，有兩種可能
     if(mouseButton==LEFT) stroke(0);//畫黑線
     if(mouseButton==RIGHT) stroke(255);//用白色清掉
     line(mouseX,mouseY,pmouseX,pmouseY); 
  }
     noStroke();
     stroke(0);
     rect(0,0,100,100);
     strokeWeight(circleSize);
     ellipse(50,50,circleSize,circleSize);
}
void mouseWheel(MouseEvent e) {
  circleSize=circleSize-e.getCount();
}
