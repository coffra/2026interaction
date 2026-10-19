//week07_1_processing_audio_SoundFile_play
//file-preferences...把字型調大
//想要在電腦，用程式控制聲音/音樂的輸入
//方法1:processing的sound外掛，方法2:minim的外掛
//sketch-library-manage libraries...網路通訊
//或者用google:processing sound library download
//moodle 的"上課用軟體"也有一份 sound.zip
//把"有3個資料夾"的sound放在"文件-processing-library目錄"裡
//成功後，便可在file-examples-libraries核心函式庫-sound-soundfile-jumbleSoundfile

import processing.sound.*;
SoundFile sound;
void setup(){
  size(300,300);
  sound=new SoundFile(this,"music.mp3");
  sound.play();//準備好music.mp3拉到程式裡，撥放
}
void draw(){

}
