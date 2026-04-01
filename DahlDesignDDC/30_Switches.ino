  //--------------------------------------
  //---------SWITCHES START HERE----------
  //--------------------------------------

  E18Inc(1, 1, false);
  E18Inc(1, 5, false);
  E18Inc(1, 3, false);
  
  E18Inc(2, 5, false);
  E18Inc(3, 1, false);
  E18Inc(3, 3, false);

  pushButton(2, 1);
  pushButton(2, 2);
  pushButton(2, 3);

  pushButton(4, 1);
  pushButton(4, 2);
  pushButton(4, 3);
  pushButton(4, 4);
  pushButton(4, 5);
  pushButton(4, 6);

  pushButton(5, 1);
  pushButton(5, 2);
  pushButton(5, 3);
  pushButton(5, 4);
  pushButton(5, 5);
  pushButton(5, 6);

  pushButton(6, 1);

  // funkyButton(6, 3, 2, 4, 5, 6);
  // funkyButton(6, 4, 2, 3, 5, 6);
  // funkyButton(6, 5, 2, 3, 4, 6);
  // funkyButton(6, 6, 2, 3, 4, 5);
  funkyHat(6, 3, 4, 5, 6, 1);
  funkyPush(6, 2, 3, 4, 5, 6);
  funkyRotary(3, 5, 6, false);
  
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
