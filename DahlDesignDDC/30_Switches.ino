  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT
  PCA9555Run(0x20, 12, 3);

  // paddles (left - right)
  switchTableInject(13, 1, 1); 
  switchTableInject(5, 1, 2);  

  switchTableInject(21, 1, 3);
  switchTableInject(20, 1, 4);
  switchTableInject(19, 1, 5);
  switchTableInject(18, 1, 6);
  switchTableInject(17, 1, 7);

  switchTableInject(0, 1, 8);
  switchTableInject(1, 2, 1);
  switchTableInject(2, 2, 2);
  switchTableInject(3, 2, 3);
  switchTableInject(4, 2, 4);

  switchTableInject(14, 2, 5);
  switchTableInject(15, 2, 6);

  switchTableInject(7, 2, 7);
  switchTableInject(6, 2, 8);

  // ASSIGNMENT

  // 2 paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // buttons left
  pushButton(1, 3);
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

  // side rotaries
  PEC11(2, 5, false);
  PEC11(2, 7, false);

  // ab encoders
  rotary4Modes(3, 1, 2, 1, true);
  rotary4Modes(3, 5, 2, 1, true);
  rotary4Modes(4, 1, 2, 1, true);
  rotary4Modes(4, 5, 2, 1, true);

  // clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(3, 11500, 10000, 2, 17600, 20500,  false);

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
