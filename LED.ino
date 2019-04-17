// anodes
int row[] = {2, 3, 4, 5, 6};
// cathodes
int col[] = {7, 8, 9};

void setup()
{
  for (int i=0;i<5;i++)
  {
       pinMode(row[i], OUTPUT);
   }
   for (int j=0;j<3;j++)
      {  
     pinMode(col[j], OUTPUT);
  } 
 
}


void loop()
{
  for (int i=0;i<5;i++)
  {
    for(int j=0;j<3;j++)
    {
      digitalWrite(row[i], HIGH);
    digitalWrite(col[j], LOW);
    delay(500);

  }
  
}
}

