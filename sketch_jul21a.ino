int a = digitalRead(7);
void setup() {
  pinMode(4, INPUT);//Fkey
  pinMode(7, INPUT);//Skey
  pinMode(3, INPUT);//Sensor
  pinMode(6, OUTPUT);//Lside(or r)
  pinMode(5, OUTPUT);//Rside(or L)


}
bool IsFirstTime = true;
bool IsChecked = false;
void asd(){
  
 if(digitalRead(3)==0){
  
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);



  IsFirstTime = false;
  }
//  else if (digitalRead (3) != 0 ){
//
//    digitalWrite(6, LOW);
//    digitalWrite(5, HIGH);
//    
//
//  }  
   else if(a != 0 && digitalRead(3)!=0 && !IsFirstTime) {
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    
  
  }
  else if (a == 0 && digitalRead(3)!=0 && !IsFirstTime ){
    if (IsChecked ){
      
      IsChecked = false;
      }
    else{
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    delay(1000);
    digitalWrite(6, HIGH);
    delay(100);
    digitalWrite(6, LOW);
    
    
    
    IsFirstTime = true;
    IsChecked= true;
    }
  }
  
  
   
}


void abc(){
  if (digitalRead(3) == 0){
  while(digitalRead(4) == 0 && digitalRead(3) == 0){
  digitalWrite(6 , LOW);
  digitalWrite(5 , LOW);
  
  if(digitalRead (3) != 0){
    abd();
    break;
  }}
  
}
}
void abd (){
  while(digitalRead (3) != 0){
   digitalWrite(6 , LOW);
   digitalWrite(5 , HIGH);
  if (digitalRead(7) == 0){
    endd();
    break;
  }
  }
  }
  
void endd(){  

  digitalWrite(6 , LOW);
  digitalWrite(5 , LOW);
  IsFirstTime = true;
  
}
void loop() {
    if (IsChecked){
      if (digitalRead(7)== 0 ){
        a = 1;
        }
       else {
        
        a = 0;
        }
      }

      else {
        a= digitalRead (7);
        
        }
   
    asd();
    abc();
    

}


 
