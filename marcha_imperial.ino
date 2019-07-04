#define TOM 1.12246
#define MEIO_TOM 1.05946

#define DO_1 DO * 2
#define DO 261.6256
#define DO_SUST DO * MEIO_TOM
#define DO_1_SUST DO_SUST * 2

#define RE DO * TOM
#define RE_1 RE * 2
#define RE_1_SUST RE_SUST * 2
#define RE_SUST RE * MEIO_TOM
#define MI RE * TOM
#define MI_1 MI * 2
#define FA MI * MEIO_TOM
#define FA_1 FA * 2
#define FA_1_SUST FA_1 * 2
#define FA_SUST FA * MEIO_TOM
#define SOL FA * TOM
#define SOL_1 SOL * 2
#define SOL_SUST SOL * MEIO_TOM
#define SOL_1_SUST SOL_SUST *2
#define LA SOL * TOM
#define LA_SUST LA * MEIO_TOM
#define LA_1 LA * 2
#define SI LA * TOM

int pino = 0;

void setup() {
  
  pinMode (pino, OUTPUT);

}

void loop() {
  
  // 1º parte OK
  tone(pino, LA); delay (600);
  noTone(pino); delay(100);
  tone(pino, LA); delay (600);
  noTone(pino); delay(100);
  tone(pino, LA); delay (600);
  noTone(pino); delay(100);
  tone(pino, FA); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
   noTone(pino); delay(25);
  tone(pino, LA); delay (500);
  noTone(pino); delay(60);
  tone(pino, FA); delay (300);
   noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
   noTone(pino); delay(25);
  tone(pino, LA); delay (500);
  noTone(pino); delay(600);
  
  // 2º parte OK
  
  tone(pino, MI_1); delay (600);
  noTone(pino); delay(100);
  tone(pino, MI_1); delay (600);
  noTone(pino); delay(100);
  tone(pino, MI_1); delay (600);
  noTone(pino); delay(100);
  tone(pino, FA_1); delay (300);
   noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
   noTone(pino); delay(25);
  tone(pino, SOL_SUST); delay (500);
  noTone(pino); delay(60);
  tone(pino, FA); delay (300);
   noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
   noTone(pino); delay(25);
  tone(pino, LA); delay (500);
  noTone(pino); delay(600);
  
  // 3º parte OK
  
  tone(pino, LA_1); delay (600);
  noTone(pino); delay(60);
  tone(pino, LA); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA_1); delay (600);
  noTone(pino); delay(60);
  tone(pino, SOL_1_SUST); delay (500);
  noTone(pino); delay(60); 
  tone(pino, SOL_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, FA_1_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, FA_1); delay (300);
  noTone(pino); delay(500);
  
   // 4º parte OK
  
   
  tone(pino, LA_SUST); delay (300);
  noTone(pino); delay(25); 
  tone(pino, RE_1_SUST); delay (500);
  noTone(pino); delay(60);
  tone(pino, RE_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, SI); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(300);
  
  
 // 5º parte OK
 
  tone(pino, FA); delay (300);
  noTone(pino); delay(25); 
  tone(pino, SOL_SUST); delay (300);
  noTone(pino); delay(25); 
  tone(pino, FA_SUST); delay (300);
  noTone(pino); delay(25); 
  tone(pino, SOL); delay (300);
  noTone(pino); delay(25); 
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25); 
  tone(pino, LA); delay (600);
  noTone(pino); delay(60); 
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25); 
  tone(pino, MI_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA_1); delay (600);
  noTone(pino); delay(500);  
  
  //6º parte OK
  
  tone(pino, LA_1); delay (600);
  noTone(pino); delay(60);  
  tone(pino, LA); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA_1); delay (600);
  noTone(pino); delay(60); 
  tone(pino, SOL_1_SUST); delay (600);
  noTone(pino); delay(60); 
  tone(pino, SOL_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, FA_1_SUST); delay (300);
  noTone(pino); delay(25);  
  tone(pino, FA_1); delay (300);
  noTone(pino); delay(25); 
  
  //7º parte OK
  
  tone(pino, LA_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, RE_1_SUST); delay (600);
  noTone(pino); delay(60);
  tone(pino, RE_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, SI); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (600);
  noTone(pino); delay(25);
  
  //8º parte OK
  
  tone(pino, FA); delay (300);
  noTone(pino); delay(25);
  tone(pino, SOL_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, FA_SUST); delay (300);
  noTone(pino); delay(25);
  tone(pino, SOL); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA); delay (600);
  noTone(pino); delay(60);
  tone(pino, FA); delay (300);
  noTone(pino); delay(25);
  tone(pino, DO_1); delay (300);
  noTone(pino); delay(25);
  tone(pino, LA); delay (600);
  noTone(pino); delay(200);

  
  
  
  
  

}
