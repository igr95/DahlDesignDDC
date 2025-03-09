#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 2, 3, 4, 5, 6, 7 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 15, 14, 13, 12, 11, 10 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  { 0, 1, 2, 3, 4, 5 },         //ROW 1
  { 6, 7, 8, 9, 10, 11 },       //ROW 2
  { 12, 13, 14, 15, 16, 17 },   //ROW 3
  { 18, 19, 20, 21, 22, 23 },   //ROW 4 
  { 24, 25, 26, 27, 28, 29 },   //ROW 5 
  { 30, 31, 32, 33, 34, 35 },   //ROW 6
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 17, 16 };
const uint8_t directPinsCount = sizeof(directPins) / sizeof(directPins[0]);


//---------------------------------------
//------------DIRECT OUTPUTS-------------
//---------------------------------------

#define enableOutput 0
uint8_t outputPins[] = { 99 };
const uint8_t outputPinsCount = sizeof(outputPins) / sizeof(outputPins[0]);


//---------------------------------------
//--------ANALOG CHANNEL SETUP-----------
//---------------------------------------

// must setup all analog channels, even if not used

#define analogChannelCount 3                             //Number of analog channels

uint8_t analogPins[analogChannelCount] =                 //Pin number for your analog channels
{ ADC1, ADC2, ADC3 };

uint8_t analogButtonNumber[analogChannelCount] =         //Button number for your analog channels
{ 37, 0, 0 };

uint8_t analogButtonNumberIncMode[analogChannelCount] =  //Button number for alternate modes
{ 39, 0, 0 };



#endif
