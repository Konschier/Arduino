void setup() {
  /LiquidCrystal lcd (12, 11, 5, 4, 3, 2);

int x;

void setup() {
  lcd.begin(16, 2); //Inicia o display e define número de colunas e linhas
  lcd.setCursor(3, 0); //Posiciona cursor
  lcd.print ("VOLTIMETRO"); //Mensagem mostrada ao iniciar display
  lcd.setCursor(3,1); //Posiciona cursor
  lcd.print("Gabi e Mayk");
  delay(5000);
}

void loop() {

  lcd.clear (); //Limpa a mensagem da tela
  x = analogRead(A1); //Lê a entrada analógica
  float Tensao = ((x * 5.0) / 1023.0) * 10.000;
  lcd.setCursor(4, 0); 
  lcd.print(Tensao);
  lcd.setCursor(12,0);
  lcd.print("V");
  delay(500);

}
