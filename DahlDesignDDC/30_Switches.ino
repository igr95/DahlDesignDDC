  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT
  // paddles (down - up)
  switchTableInject(19, 1, 1);
  switchTableInject(30, 1, 2);

  // buttons (top-bottom)
  switchTableInject(0, 1, 3);
  switchTableInject(2, 1, 4);
  switchTableInject(4, 1, 5);
  switchTableInject(6, 1, 6);
  
  // buttons right (top-bottom)
  switchTableInject(14, 1, 7);
  switchTableInject(12, 1, 8);
  switchTableInject(10, 2, 1);
  switchTableInject(8, 2, 2);

  // ROT L + ROT R
  switchTableInject(21, 2, 3);
  switchTableInject(22, 2, 4);
  switchTableInject(26, 2, 5);
  switchTableInject(28, 2, 6);

  // abs enc top
  switchTableInject(39, 3, 1);
  switchTableInject(33, 3, 2);
  switchTableInject(37, 3, 3);
  switchTableInject(35, 3, 4);

  // abs enc left
  switchTableInject(11, 4, 1);
  switchTableInject(17, 4, 2);
  switchTableInject(13, 4, 3);
  switchTableInject(15, 4, 4);

  // abs enc right
  switchTableInject(32, 4, 5);
  switchTableInject(38, 4, 6);
  switchTableInject(34, 4, 7);
  switchTableInject(36, 4, 8);

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
  pushButton(1, 8);
  pushButton(2, 1);
  pushButton(2, 2);

  // rotaries
  rotary4Modes(3, 1, 2, 1, true);
  rotary4Modes(4, 1, 2, 1, true);
  rotary4Modes(4, 5, 2, 1, true);

  // ROT L + ROT R
  PEC11(2, 3, false);
  PEC11(2, 5, false);

  // // clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(1, 240, 200, 2, 345, 385, false);
    
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
