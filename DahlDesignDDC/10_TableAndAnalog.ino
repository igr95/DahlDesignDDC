#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 0, 1, 2, 3, 4, 5 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 16, 17, 18, 19, 20, 21 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  {0, 1, 2, 3, 4, 5},         //ROW1
  {6, 7, 8, 9, 10, 11},       //ROW2
  {12, 13, 14, 15, 16, 17},   //ROW3
  {18, 19, 20, 21, 22, 23},   //ROW4
  {24, 25, 26, 27, 28, 29},   //ROW5
  {30, 31, 32, 33, 34, 35}    //ROW6
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 99 };
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

#define analogChannelCount 1                             //Number of analog channels

uint8_t analogPins[analogChannelCount] =                 //Pin number for your analog channels
{ 99 };

uint8_t analogButtonNumber[analogChannelCount] =         //Button number for your analog channels
{ 0 };

uint8_t analogButtonNumberIncMode[analogChannelCount] =  //Button number for alternate modes
{ 0 };



#endif
