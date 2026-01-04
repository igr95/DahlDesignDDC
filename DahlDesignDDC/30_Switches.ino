  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT

  // paddles (down - up)
  switchTableInject(9, 1, 1); // 0
  switchTableInject(6, 1, 2); // 1

  // buttons right (top-bottom)
  switchTableInject(11, 1, 3);
  switchTableInject(12, 1, 4);
  switchTableInject(13, 1, 5);
  switchTableInject(15, 1, 6);
  switchTableInject(14, 1, 7);

  // buttons left (top-bottom)
  switchTableInject(4, 1, 8);
  switchTableInject(3, 1, 9);
  switchTableInject(2, 1, 10);
  switchTableInject(1, 1, 11);
  switchTableInject(0, 1, 12);

  // rotaries (left - right)
  switchTableInject(20, 1, 13);
  switchTableInject(21, 1, 14);
  switchTableInject(18, 1, 15);
  switchTableInject(19, 1, 16);

  // ASSIGNMENT

  // paddles
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
  pushButton(1, 9);
  pushButton(1, 10);
  pushButton(1, 11);
  pushButton(1, 12);

  // rotaries
  E18Inc(1, 13, false);
  E18Inc(1, 15, false);

  // clutches
  dualClutch(3, 10800, 8800, 2, 10000, 7800, false);

  // top left and top right white buttons, 8 seconds
  firmwareUploadMode(1, 3, 1, 8, 8000);

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
