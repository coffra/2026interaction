//week05_1_arduino_do_re_mi_Serial
//在啟動時void setup()裡，多了Do Re Mi才知道小板子有開機運作
//修改自week02_5_arduino_do_re_mi_Serial_begin_available_read_if_tone
//google:我想要把 Arduino 跟 Processing 結合
//在 Processing 按下 key 1 2 3 對應 Arduino 的 Do Re Mi 使用 USB Serial
//寫完程式後，用tool-序列埠監控視窗SerialMonitor來傳送1 2 3測試，很麻煩
//要記得關掉Serial Monitor
void setup() {
  Serial.begin(9600);//USB Serial開始傳輸，速度9600bps
  //tone(8,523,100);<-會出錯，滑出去，沒聽到
  //tone(8,587,100);<-會出錯，滑出去，沒聽到
  tone(8,523,100);//do
  delay(200);//等一下聲音，讓他不要滑出去
  tone(8,587,100);//re 
  delay(200);
  tone(8,659,100);//mi
}

void loop() {
  if(Serial.available()){//如果USB Serial有收到資料
  char c= Serial.read();//讀進來
  if(c=='1') tone(8,523,100);//do,0.1秒
  if(c=='2') tone(8,587,100);//re,0.1秒
  if(c=='3') tone(8,659,100);//mi,0.1秒
 }
}
