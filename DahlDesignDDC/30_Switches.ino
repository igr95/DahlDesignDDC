  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // TABLE INJECT

  // paddles (down - up)
  switchTableInject(17, 1, 1); // 0
  switchTableInject(22, 1, 2); // 1

  // buttons (top-bottom)
  switchTableInject(5, 1, 3); // 2
  // switchTableInject(1, 1, 4); // 3
  // switchTableInject(2, 1, 5); // 4
  // switchTableInject(3, 1, 6); // 5
  // switchTableInject(4, 1, 7); // 6

  // buttons right (top-bottom)
  switchTableInject(0, 1, 8);  // 7
  // switchTableInject(18, 1, 9);  // 8
  // switchTableInject(19, 1, 10); // 9 
  // switchTableInject(20, 1, 11); // 10
  // switchTableInject(21, 1, 12); // 11

  // rotaries (left - right)
  switchTableInject(7, 1, 13);
  switchTableInject(8, 1, 14);
  switchTableInject(9, 1, 15);
  switchTableInject(10, 1, 16);
  switchTableInject(11, 1, 17);
  switchTableInject(13, 1, 18);
  switchTableInject(14, 1, 19);
  switchTableInject(15, 1, 20);

  // ASSIGNMENT

  // paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // buttons left
  pushButton(1, 3);
  // pushButton(1, 4);
  // pushButton(1, 5);
  // pushButton(1, 6);
  // pushButton(1, 7);
  // buttons right
  pushButton(1, 8);
  // pushButton(1, 9);
  // pushButton(1, 10);
  // pushButton(1, 11);
  // pushButton(1, 12);

  // rotaries
  funkyRotary(1, 13, 14, false);
  funkyRotary(1, 15, 16, false);
  funkyRotary(1, 17, 18, false);
  funkyRotary(1, 19, 20, false);

  // clutch (channel 3: ADC2, channel 2: ADC1)
  dualClutch(2, 1450, 3650, 3, 4900, 7400, false);

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
