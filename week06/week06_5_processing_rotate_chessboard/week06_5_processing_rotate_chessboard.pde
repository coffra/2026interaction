//week06_5_processing_rotate_chessboard
//小心，是修改自week06_3_processing_rotate_translate_rotate_rect
//想要一個會旋轉的迷宮(西洋棋的棋盤)
void setup(){
  size(500,500);
}
void draw(){
  background(128);//黑色背景
  translate(250,250);//往右移、往下移
  //translate(mouseX,mouseY);//(暫用mouse當移動量)
  //println(mouseX,mouseY);//(印出mouse座標)
  rotate(radians(frameCount));//持續轉動
  rect(-200,-200,400,400);//座標奇怪的四邊形
  for(int i=0;i<8;i++){//左手i對應y座標
    for(int j=0;j<8;j++){//右手j對應x座標
      if((i+j)%2==1) fill(255);//白色
      else fill(0);//黑色
      rect(j*50-200,i*50-200,50,50);//小格子
    }
  }
}
