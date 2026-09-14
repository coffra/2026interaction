//week02_1_void_setup_void_draw_fill_textSize_text_key
//鍵盤的操作，與上週的滑鼠結合
void setup(){
 size(500,500);
}
void draw(){
  if(mousePressed) background(#F5B2B2);
  else background(#B2D6F5);//tool-color
  fill(0,0,255);//藍色填充
  textSize(80);
  text("key:"+key,200,300);
}
