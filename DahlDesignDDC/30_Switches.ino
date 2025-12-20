  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT

  // paddles (down - up)
  switchTableInject(0, 1, 1); // 0
  switchTableInject(18, 1, 2); // 1

  // buttons (top-bottom)
  switchTableInject(1, 1, 4); // 2
  switchTableInject(2, 1, 3); // 3
  switchTableInject(3, 1, 5); // 4
  switchTableInject(4, 1, 6); // 5
  switchTableInject(5, 1, 7); // 6

  // buttons right (top-bottom)
  switchTableInject(15, 1, 10);  // 7
  switchTableInject(22, 1, 11);  // 8
  switchTableInject(21, 1, 9); // 9 
  switchTableInject(20, 1, 8); // 10
  switchTableInject(19, 1, 12); // 11

  // rotaries (left - right)
  switchTableInject(6, 1, 13);
  switchTableInject(7, 1, 14);
  switchTableInject(8, 1, 15);
  switchTableInject(9, 1, 16);
  switchTableInject(10, 1, 17);
  switchTableInject(11, 1, 18);
  switchTableInject(12, 1, 19);
  switchTableInject(13, 1, 20);

  // xtra left-right
  switchTableInject(17, 1, 21); // 2
  switchTableInject(14, 1, 22); // 2

  // ASSIGNMENT

  // 2 paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // 4 buttons left
  pushButton(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);
  // 4 buttons right
  pushButton(1, 7);

  // buttons right
  pushButton(1, 8);
  pushButton(1, 9);
  pushButton(1, 10);
  pushButton(1, 11);
  pushButton(1, 12);

  // rotaries
  E18Inc(1, 13, false);
  E18Inc(1, 15, false);
  E18Inc(1, 17, false);
  // E18Inc(1, 19, false);

  // xtra left-right
  pushButton(1, 21);
  pushButton(1, 22);

  // clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(2, 10500, 8800, 3, 14600, 16400, false);
  // checkValue(2);
  // dualClutchCal(2, 3, false); 
  // clutchCalibrate(1, 3); // top left button to enable calib

  // rotaryAnalog2Mode(1, 1, 0, 2800, 5300, 8000, 10700, 13300, 16000, 19000, 22300, 25500, 23450, 29000, false);
  // setAnalogSwitchMode(1, 1, 1); // change rotary to incremental mode


  // top left and top right buttons, 8 seconds
  // firmwareUploadMode(1, 3, 1, 8, 8000);

  //--------------------------------------
  //---------SWITCHES END HERE------------
  //--------------------------------------

	Joystick.setZAxis(rotaryField - 32767);
	Joystick.setYAxis(buttonField - 32767);

	Joystick.sendState();

} //LOOP ENDS HERE

#if (BOARDTYPE == 2)
  void loop()
  {
	#if (LED1COUNT + LED2COUNT + LED3COUNT + LED4COUNT > 0)
		processCommands();
	#endif
  #if(USING_CB1 == 1 || ENABLE_OVERSAMPLING == 1)
    CB1Oversampling();
  #endif
  }
#endif
