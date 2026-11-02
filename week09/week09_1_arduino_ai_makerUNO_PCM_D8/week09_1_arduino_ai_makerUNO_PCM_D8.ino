//week09_1_arduino_ai_makerUNO_PCM_D8
//讓makeruno 發出更多元的聲音，不要只是用單調的tone()
//用AI找答案
//Q1:makeruno可以用pin8的buzzer利用tone()來發出單調的聲音
//有辦法發出精彩的聲音嗎
//Q2請幫我找PCM相關的libraries 我想試試看
//Q3如何修改PCM libraries ，讓他利用pin8的軟體或其他輸出技術播放 PCM
//這時，AI給我們修改過的MakerUNO_PCM_D8.zip 解開來，把MakerUNO_PCM_D8的程式放week09_1程式裡
//Q4:我在編譯時，出現PCM.h的錯誤
//A:請把PCM.cpp、sounddata.h、PCM.h放資料夾
//A: 請把 PCM.cpp PCM.h sounddata.h 都放在同一個目錄 week09_1_arduino_ai
// Maker UNO: turn ON the onboard BUZZER slide switch.
// Board selection: Arduino Uno / ATmega328P / 16 MHz.
// This sketch uses the local modified PCM.cpp, NOT the original D11 library.
#include "PCM.h"
#include "sounddata.h"

void setup() {
  startPlayback(sounddata_data, sounddata_length);
}

void loop() {
  // One-shot sample plays for 1 second. Press RESET to play again.
}
