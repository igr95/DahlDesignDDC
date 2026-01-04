#if(USING_CB1 == 0)

//-----------------------------------------
//------------TABLE VARIABLES-------------
//-----------------------------------------

uint8_t row[] = { 15, 0, 9, 8, 7, 6, 99, 99, 99 };
const uint8_t rowCount = sizeof(row) / sizeof(row[0]);

uint8_t col[] = { 19, 18, 17, 5, 4, 99 ,99 ,99 };
const uint8_t colCount = sizeof(col) / sizeof(col[0]);

//---------------------------------------
//--------TABLE DESCRIPTION--------------
//---------------------------------------

uint8_t buttonNumber[rowCount][colCount] =
{
  { 2, 3, 4, 12, 13,0,0 }, // ROW 1
  { 7, 8, 9, 14, 15,0,0 }, // ROW 2
  { 16, 0, 0, 0, 5, 0,0 }, // ROW 4
  { 28, 0, 0, 0, 6, 0,0 }, // ROW 5
  { 40, 0, 0, 0, 10,0,0 }, // ROW 5
  { 52, 0, 0, 0, 11,0,0 }, // ROW 6
  { 0, 1, 0, 0, 0,0, 0,0    },  // DIRECT PINS
  { 28, 0, 0, 0, 40,0, 0,0    },  // PORT EXPANDER
  { 0, 1, 0, 0, 52,0, 0,0    },  // PORT EXPANDER
};

//---------------------------------------
//------------DIRECT INPUTS--------------
//---------------------------------------


uint8_t directPins[] = { 3, 14 };
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
