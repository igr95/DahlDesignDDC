  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  // paddles
  switchTableInject(3, 1, 1);  // 0
  switchTableInject(9, 1, 2); // 1

  // buttons (top-bottom)
  switchTableInject(4, 1, 3); // 2
  switchTableInject(2, 1, 4); // 3
  switchTableInject(0, 1, 5); // 4
  switchTableInject(1, 1, 6); // 5
  // buttons right (top-bottom)
  switchTableInject(6, 1, 7);  // 6
  switchTableInject(5, 1, 8); // 7
  switchTableInject(8, 1, 9); // 8
  switchTableInject(7, 1, 10);  // 9 

  // rotaries (left - right)
  switchTableInject(10, 1, 11);
  switchTableInject(11, 1, 12);
  switchTableInject(12, 1, 13);
  switchTableInject(13, 1, 14);

  // paddles
  pushButton(1, 1);
  pushButton(1, 2);

  // buttons left
  pushButton(1, 3);
  pushButton(1, 4);
  pushButton(1, 5);
  pushButton(1, 6);
  // buttons right
  pushButton(1, 7);
  pushButton(1, 8);
  pushButton(1, 9);
  pushButton(1, 10);

  // rotaries
  E18Inc(1, 11, true);
  E18Inc(1, 13, true);

  firmwareUploadMode(1, 3, 1, 7, 8000);

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
