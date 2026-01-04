  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT
  PCA9555Run(0x20, 22, 8);

  // paddles (left - right)
  switchTableInject(14, 7, 1); // 0
  switchTableInject(3, 7, 2);  // 1

  // ASSIGNMENT

  // 2 paddles
  pushButton(7, 1);
  pushButton(7, 2);

  // buttons left
  pushButton(1, 1);
  pushButton(1, 2);
  pushButton(1, 3);
  pushButton(3, 5);
  pushButton(4, 5);

  // buttons right
  pushButton(2, 1);
  pushButton(2, 2);
  pushButton(2, 3);
  pushButton(5, 5);
  pushButton(6, 5);

  // side rotaries
  PEC11(1, 4, false);
  PEC11(2, 4, false);

  // ab encoders
  rotary4Modes(3, 1, 2, 1, true);

  rotary4Modes(8, 1, 2, 1, true);
  rotary4Modes(8, 5, 2, 1, true);
  rotary4ModesReverse(9, 5, 2, 1, true);

  // clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(3, 11600, 10000, 2, 17600, 20500,  false);

  // top left and top right white buttons, 8 seconds
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
