#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 99, 99, 99 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 99, 99, 99, 99, 99, 99, 99, 99 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  { 0, 1, 2, 3, 4, 5, 6, 7, },
  { 8, 9, 10, 11, 12, 0, 0, 0, },
  { 24, 0, 0, 0, 0, 0, 0, 0, }
  
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 
  10, 11, 12, 13, 14, // buttons left
  8, 7, 6, 5, 4,      // buttons right
  15, 3,              // paddles
  19, 16, 18, 17,     // ab encoder left
  2, 20, 22, 21,      // ab encoder right
};
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
{ 0, 0, 0 };

uint8_t analogButtonNumberIncMode[analogChannelCount] =  //Button number for alternate modes
{ 0, 0, 0 };



#endif
