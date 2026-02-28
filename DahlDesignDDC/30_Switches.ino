  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  PCA9555Run(0x20, 36, 5);

  // paddles
  switchTableInject(39, 1, 1);
  switchTableInject(38, 1, 2);

  pushButton(1, 1);
  pushButton(1, 2);

  // buttons left (6)
  switchTableInject(23, 1, 3);
  switchTableInject(21, 1, 4);
  switchTableInject(13, 1, 5);
  switchTableInject(8, 1, 6);
  switchTableInject(22, 1, 7);
  switchTableInject(24, 1, 8);

  pushButton(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);
  pushButton(1, 7);
  pushButton(1, 8);

  // buttons right (6)
  switchTableInject(35, 2, 1);
  switchTableInject(37, 2, 2);
  switchTableInject(29, 2, 3);
  switchTableInject(26, 2, 4);
  switchTableInject(32, 2, 5);
  switchTableInject(34, 2, 6);

  pushButton(2, 1);
  pushButton(2, 2);
  pushButton(2, 3);
  pushButton(2, 4);
  pushButton(2, 5);
  pushButton(2, 6);

  // buttons MOM OFF MOM (4)
  switchTableInject(3, 2, 7);
  switchTableInject(5, 2, 8);
  switchTableInject(7, 3, 1);
  switchTableInject(9, 3, 2);

  toggleP(2, 7);
  toggleP(2, 8);
  toggleP(3, 1);
  toggleP(3, 2);

  // rotaries PEC11 (6)
  switchTableInject(19, 3, 3);
  switchTableInject(17, 3, 4);
  switchTableInject(4, 3, 5);
  switchTableInject(6, 3, 6);
  switchTableInject(18, 3, 7);
  switchTableInject(20, 3, 8);

  switchTableInject(31, 4, 1);
  switchTableInject(33, 4, 2);
  switchTableInject(25, 4, 3);
  switchTableInject(27, 4, 4);
  switchTableInject(30, 4, 5);
  switchTableInject(28, 4, 6);

  PEC11(3, 3, false);
  PEC11(3, 5, false);
  PEC11(3, 7, false);
  PEC11(4, 1, false);
  PEC11(4, 3, false);
  PEC11(4, 5, false);

  // ab encoders
  rotary4Modes(5, 1, 2, 1, true);
  rotary4Modes(5, 5, 2, 1, true);
  rotary4Modes(6, 1, 2, 1, true);
  rotary4Modes(6, 5, 2, 1, true);

  // clutches
  dualClutch(1, 220, 175, 2, 240, 195, true);
  // checkValue(2);

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
