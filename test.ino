#include <Keyboard.h>
#include <Keypad.h>

const byte ROWS = 5; // Four rows
const byte COLS = 3; // Three columns
// Define the Keymap
char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'},
  {'0','.',','},
  {'*','$','#'}
};
// Connect keypad ROW0, ROW1, ROW2 and ROW3 to these Arduino pins.
byte rowPins[ROWS] = { A0, A1, A2, A3, A4 };
// Connect keypad COL0, COL1 and COL2 to these Arduino pins.
byte colPins[COLS] = { 12, 11, 10 }; 
// anodes
int row[] = {2, 3, 4, 5, 6};
// cathodes
int col[] = {7, 8, 9};

// Create the Keypad
Keypad kpd = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );


//int k=0;
String a;
String array[30]= {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty","hundred","thousand"};

void setup()
{
//    for (int s=0;s<5;s++)
//  {
//    pinMode(row[s], OUTPUT);
//  } 
//  for (int s=0;s<3;s++)
//  {
//     pinMode(col[s], OUTPUT);
//  }
  Serial.begin(9600);
  Serial1.begin(9600);

}

void loop()
{
//    for (int i=0;i<5;i++)
//  {
//    for(int j=0;j<3;j++)
//    {
//      digitalWrite(row[i], HIGH);
//    digitalWrite(col[j], LOW);
//    delay(300);
//  }
//}
  char key = kpd.getKey();
  //Serial1.begin(9600);
  if(key)  // Check for a valid key.
  {
    switch (key)
    {
      case '*':
        Keyboard.press(KEY_BACKSPACE);
        Keyboard.release(KEY_BACKSPACE);
      //  k--;
      
        break;
      case '$':
        Keyboard.press(KEY_DELETE);
        Keyboard.release(KEY_DELETE);
        break;
      case '#':
        Keyboard.press(KEY_RETURN);
        Keyboard.release(KEY_RETURN);

        Serial.println(a);


        int i;
    //String array[30]= {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty","hundred","thousand"};
    i= a.toInt();
    if(i<=20)
      {
         Serial1.println(array[i]);
         Serial.println(array[i]);
         delay(1000);
      }
      else if(i==30)
      {
        Serial1.println(array[21]);
        Serial.println(array[21]);
        delay(1000);
      }
      else if(i==40)
      {
        Serial1.println(array[22]);
        Serial.println(array[22]);
        delay(1000);
      }
      else if(i==50)
      {
        Serial1.println(array[23]);
        Serial.println(array[23]);
        delay(1000);
      }
      else if(i==60)
      {
        Serial1.println(array[24]);
        Serial.println(array[24]);
        delay(1000);
      }
      else if(i==70)
      {
        Serial1.println(array[25]);
        Serial.println(array[25]);
        delay(1000);
      }
      else if(i==80)
      {
        Serial1.println(array[26]);
        Serial.println(array[26]);
        delay(1000);
      }
      else if(i==90)
      {
        Serial1.println(array[27]);
        Serial.println(array[27]);
        delay(1000);
      }
      else if(i==100)
      {
        Serial1.println(array[28]);
        Serial.println(array[28]);
        delay(1000);
      }
      else if(i==1000)
    {
      Serial1.println(array[29]);
      Serial.println(array[29]);
      delay(1000);
    }
    else if(i>100)
    {
      int h=i/100;
      int x=i%100;
      int r=x/10;
      int b=x%10;
      if(r==0 && b==0)
      {
       Serial1.println(array[h]+array[28]);
       Serial.println(array[h]+array[28]);
       delay(1000); 
      }

      if(r==1)
      {
        if(b==0)
        {
         Serial1.println(array[h]+array[28]+"and"+array[10]);
         Serial.println(array[h]+array[28]+"and"+array[10]);
         delay(1000);          
        }
        else
        {
         Serial1.println(array[h]+array[28]+"and"+array[b]);
         Serial.println(array[h]+array[28]+"and"+array[b]);
         delay(1000);
        }
      }
      if(r==2)
         {
          if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[20]);
            Serial.println(array[h]+array[28]+"and"+array[20]);
            delay(1000); 
          }
          else
          {
          Serial1.println(array[h]+array[28]+"and"+array[20]+array[b]);
          Serial.println(array[h]+array[28]+"and"+array[20]+array[b]);
          delay(1000);
          }
         }
     if(r==3)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[21]);
            Serial.println(array[h]+array[28]+"and"+array[21]);
            delay(1000); 
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[21]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[21]+array[b]);
            delay(1000);
          }
     }
     if(r==4)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[22]);
            Serial.println(array[h]+array[28]+"and"+array[22]); 
            delay(1000);
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[22]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[22]+array[b]);
            delay(1000);
           }
     }
     if(r==5)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[23]);
            Serial.println(array[h]+array[28]+"and"+array[23]); 
            delay(1000);
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[23]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[23]+array[b]);
            delay(1000);
          }
     }
     if(r==6)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[24]);
            Serial.println(array[h]+array[28]+"and"+array[24]);
            delay(1000); 
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[24]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[24]+array[b]);
            delay(1000);
           }
     }
     if(r==7)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[25]);
            Serial.println(array[h]+array[28]+"and"+array[25]); 
            delay(1000);
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[25]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[25]+array[b]);
            delay(1000);
           }
     }
     if(r==8)
     {
      if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[26]);
            Serial.println(array[h]+array[28]+"and"+array[26]);
            delay(1000); 
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[26]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[26]+array[b]);
            delay(1000);
           }
     }
     if(r==9)
     {
       if(b==0)
          {
            Serial1.println(array[h]+array[28]+"and"+array[27]);
            Serial.println(array[h]+array[28]+"and"+array[27]);
            delay(1000); 
          }
          else
          {
            Serial1.println(array[h]+array[28]+"and"+array[27]+array[b]);
            Serial.println(array[h]+array[28]+"and"+array[27]+array[b]);
            delay(1000);
           }
     }
        
    }
      else
      {
       int r=i/10;
       int b=i%10;
       if(r==2)
       {
        Serial1.println(array[20]+array[b]);
        Serial.println(array[20]+array[b]);
        delay(1000);
       }
       if(r==3)
       {
        Serial1.println(array[21]+array[b]);
        Serial.println(array[21]+array[b]);
        delay(1000);
       }
       if(r==4)
       {
        Serial1.println(array[22]+array[b]);
        Serial.println(array[22]+array[b]);
        delay(1000);
       }
       if(r==5)
       {
        Serial1.println(array[23]+array[b]);
        Serial.println(array[23]+array[b]);
        delay(1000);
       }
       if(r==6)
       {
        Serial1.println(array[24]+array[b]);
        Serial.println(array[24]+array[b]);
        delay(1000);
       }
       if(r==7)
       {
        Serial1.println(array[25]+array[b]);
        Serial.println(array[25]+array[b]);
        delay(1000);
       }
       if(r==8)
       {
        Serial1.println(array[26]+array[b]);
        Serial.println(array[26]+array[b]);
        delay(1000);
       }
       if(r==9)
       {
        Serial1.println(array[27]+array[b]);
        Serial.println(array[27]+array[b]);
        delay(1000);
       }
       }
        a="";
     
        //Serial.println(k);
        
        break;
      default:
        //k++;
        if(key!='.' && key!=',')
        {
        a=a+key;      
        Serial1.println(key);
        }
        Keyboard.println(key);
        break;
    }
    
  }
}
