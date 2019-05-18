// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorWithSwitch.h"

ADoorWithSwitch::ADoorWithSwitch()
{
	numSwitch = 0;
}

void ADoorWithSwitch::setnumSwitch(int arg)
{
	numSwitch += arg;
}

void ADoorWithSwitch::setActiveSwitch(int arg)
{
	numSwitch += arg;
	if (numSwitch <= 0) {
		move = true;
	}
}
//do nothing at this moment
void ADoorWithSwitch::DoPlayerInteraction()
{
}