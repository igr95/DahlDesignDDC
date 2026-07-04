  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT
  // paddles (down - up)
  switchTableInject(15, 1, 1);
  switchTableInject(30, 1, 2);

  // buttons (top-bottom)
  switchTableInject(0, 1, 3);
  switchTableInject(2, 1, 4);
  switchTableInject(4, 1, 5);
  switchTableInject(6, 1, 6);
  switchTableInject(8, 1, 7);
  switchTableInject(22, 1, 8);
  
  // buttons right (top-bottom)
  switchTableInject(20, 2, 1);
  switchTableInject(16, 2, 2);
  switchTableInject(14, 2, 3);
  switchTableInject(12, 2, 4);
  switchTableInject(10, 2, 5);

  // ROT L + ROT R
  switchTableInject(19, 2, 6);
  switchTableInject(21, 2, 7);
  switchTableInject(23, 2, 8);
  switchTableInject(28, 3, 1);
  switchTableInject(25, 3, 2);
  switchTableInject(26, 3, 3);

  // abs enc top
  switchTableInject(39, 3, 5);
  switchTableInject(33, 3, 6);
  switchTableInject(37, 3, 7);
  switchTableInject(35, 3, 8);

  // abs enc left
  switchTableInject(1, 4, 1);
  switchTableInject(7, 4, 2);
  switchTableInject(3, 4, 3);
  switchTableInject(5, 4, 4);

  // abs enc right
  switchTableInject(32, 4, 5);
  switchTableInject(38, 4, 6);
  switchTableInject(34, 4, 7);
  switchTableInject(36, 4, 8);

  // ASSIGNMENT

  // 2 paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // 5 buttons left
  pushButton(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);
  clutchCalibrate(1, 7);

  // button center
  pushButton(1, 8);

  // 5 buttons right
  pushButton(2, 1);
  pushButton(2, 2);
  pushButton(2, 3);
  pushButton(2, 4);
  pushButton(2, 5);

  // ROT L + ROT R
  PEC11(2, 6, false);
  pushButton(2, 8);
  PEC11(3, 1, false);
  pushButton(3, 3);

  // rotaries
  rotary4Modes(3, 5, 2, 1, true);
  rotary4Modes(4, 1, 2, 1, true);
  rotary4Modes(4, 5, 2, 1, true);

  // clutch
  dualClutchCal(1, 2, false);
    
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
