  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // paddles (2)
  pushButton(3, 1);
  pushButton(3, 2);

  // buttons left (6)
  pushButton(1, 1);
  pushButton(1, 2);
  pushButton(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);

  // buttons right (6)
  pushButton(6, 1);
  pushButton(6, 2);
  pushButton(6, 3);
  pushButton(6, 4);
  pushButton(6, 5);
  pushButton(6, 6);

  // buttons MOM OFF MOM (4)
  toggleP(3, 3);
  toggleP(3, 4);
  toggleP(3, 5);
  toggleP(3, 6);

  // rotaries (9)

  // rotaries PEC11 (6)
  PEC11(4, 1, false);
  PEC11(4, 3, false);
  PEC11(4, 5, false);
  PEC11(5, 1, false);
  PEC11(5, 3, false);
  PEC11(5, 5, false);

  // rotaries bottom (3)
  E18Inc(2, 1, false);
  E18Inc(2, 3, false);
  E18Inc(2, 5, false);

  // grayhill
  // rotaryAnalog2Mode(1, 1, 780, 870, 930, 1010, 1095, 1195, 1320, 1510, 1790, 2230, 3100, 5460, false);
  // setAnalogSwitchMode(1, 1, 1); // change rotary to incremental mode

  // clutches
  dualClutch(2, 10000, 7400, 3, 10500, 8500, true);
  // checkValue(1);

  // top left and top right green buttons, 8 seconds
  // firmwareUploadMode(1, 3, 1, 9, 8000);

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
