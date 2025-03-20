  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT

  // 2 paddles (down - up)
  switchTableInject(22, 1, 1); // 0
  switchTableInject(18, 1, 2); // 1

  // 4 buttons left (top-bottom)
  switchTableInject(6, 1, 3); // 2
  switchTableInject(7, 1, 4); // 3
  switchTableInject(8, 1, 5); // 4
  switchTableInject(9, 1, 6); // 5

  // 4 buttons right (top-bottom)
  switchTableInject(10, 1, 7);  // 6
  switchTableInject(11, 1, 8);  // 7
  switchTableInject(12, 1, 9);  // 8
  switchTableInject(13, 1, 10); // 9 
  
  // 3 rotaries (left - right)
  switchTableInject(0, 1, 11); // 10
  switchTableInject(1, 1, 12); // 11
  switchTableInject(2, 1, 13); // 12
  switchTableInject(3, 1, 14); // 13
  switchTableInject(4, 1, 15); // 14
  switchTableInject(5, 1, 16); // 15

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
  pushButton(1, 9);
  pushButton(1, 10);

  // 3 rotaries
  E18Inc(1, 11, false);
  E18Inc(1, 13, false);
  E18Inc(1, 15, false);

  // 2 clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(3, 10100, 7300, 2, 10400, 7900, false);

  // top left and top right white buttons, 8 seconds
  // firmwareUploadMode(1, 3, 1, 7, 8000);

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
