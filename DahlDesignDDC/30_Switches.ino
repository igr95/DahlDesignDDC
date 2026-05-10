  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT
  // paddles (down - up)
  switchTableInject(15, 1, 1); // 0
  switchTableInject(3, 1, 2); // 1

  // buttons right (top-bottom)
  switchTableInject(10, 1, 3);
  switchTableInject(11, 1, 4);
  switchTableInject(12, 1, 5);
  switchTableInject(13, 1, 6);
  switchTableInject(14, 1, 7);

  // buttons left (top-bottom)
  switchTableInject(8, 1, 8);
  switchTableInject(7, 2, 1);
  switchTableInject(6, 2, 2);
  switchTableInject(5, 2, 3);
  switchTableInject(4, 2, 4);

  // rotaries (left - right)
  switchTableInject(19, 2, 5);
  switchTableInject(16, 2, 6);
  switchTableInject(18, 2, 7);
  switchTableInject(17, 2, 8);

  switchTableInject(2, 3, 1);
  switchTableInject(20, 3, 2);
  switchTableInject(22, 3, 3);
  switchTableInject(21, 3, 4);

  // ASSIGNMENT

  // paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // buttons left
  clutchCalibrate(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);
  pushButton(1, 7);

  // buttons right
  pushButton(1, 8);
  pushButton(2, 1);
  pushButton(2, 2);
  pushButton(2, 3);
  pushButton(2, 4);

  // rotaries
  rotary4Modes(2, 5, 2, 1, true);
  rotary4Modes(3, 1, 2, 1, true);

  // clutches
  dualClutchCal(2, 1, false);
  // checkValue(2);

  // top left and top right white buttons, 8 seconds
  firmwareUploadMode(1, 3, 1, 8, 8000);
  // checkValue(1);

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
