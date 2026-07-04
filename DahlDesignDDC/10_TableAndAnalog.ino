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
  { 8, 9, 10, 11, 12, 13, 14, 15, },
  { 16, 17, 18, 99, 19, 99, 99, 99, },
  { 31, 99, 99, 99, 43, 99, 99, 99 },
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 
  15, 30, 0, 2, 4, 6, 8, 22, // Shifters + BT1-6 (8)
  20, 16, 14, 12, 10, 19, 21, 23, // BT7-11 + ROT L (8)
  28, 26, 25, // ROT R + (3)
  // 13, 9, // EXTRA L (2)
  // 31, 27, 29, // EXTRA R (3)
  39, 33, 37, 35, // EXTRA R + AB ENC TOP (7)
  1, 7, 3, 5, 32, 38, 34, 36,  // AB ENC BOTTOM L-R (8)
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
