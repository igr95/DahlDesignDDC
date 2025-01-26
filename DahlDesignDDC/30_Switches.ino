  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT

  // paddles (down - up)
  switchTableInject(17, 1, 1);  // 0
  switchTableInject(22, 1, 2); // 1

  // buttons (top-bottom)
  switchTableInject(0, 1, 3); // 2
  switchTableInject(1, 1, 7); // 3
  switchTableInject(2, 1, 6); // 4
  switchTableInject(3, 1, 5); // 5
  switchTableInject(4, 1, 4); // 6
  // buttons right (top-bottom)
  switchTableInject(11, 1, 10); // 7
  switchTableInject(12, 1, 11); // 8
  switchTableInject(13, 1, 8); // 9 
  switchTableInject(14, 1, 9); // 10
  switchTableInject(15, 1, 12); // 11

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
  funkyRotary(1, 13, 14, false);
  funkyRotary(1, 15, 16, false);

  // clutch (channel 3: ADC3 -A2-)
  singleClutch(3, 17000, 29000);
  
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
