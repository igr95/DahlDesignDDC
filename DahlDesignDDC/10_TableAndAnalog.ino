#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 99, 99, 99, 99 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 99, 99, 99, 99, 99, 99, 99, 99 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  { 0, 1, 2, 3, 4, 5, 6, 7, },
  { 8, 9, 10, 11, 12, 13, 99, 99, },
  { 14, 99, 99, 99, 99, 99, 99, 99, },
  { 26, 99, 99, 99, 38, 99, 99, 99 },
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 
  19, 30, 0, 2, 4, 6, 14, 12, // Shifters + BT1-6
  10, 8, 21, 22, 39, 33, 37, 35, // BT7-8 + ROT L + AB ENC TOP
  11, 17, 13, 15, 32, 38, 34, 36, // BT6-8 + AB ENC BOTTOM L-R
  26, 28 // ROT R
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

#define analogChannelCount 8                             //Number of analog channels

uint8_t analogPins[analogChannelCount] =                 //Pin number for your analog channels
{ A0, A1, A2, A3, A4, A5, A6, A7 };

uint8_t analogButtonNumber[analogChannelCount] =         //Button number for your analog channels
{ 0, 0, 0, 0, 0, 0, 0, 0 };

uint8_t analogButtonNumberIncMode[analogChannelCount] =  //Button number for alternate modes
{ 0, 0, 0, 0, 0, 0, 0, 0 };



#endif
