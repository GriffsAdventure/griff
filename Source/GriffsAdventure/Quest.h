// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 *
 */
class GRIFFSADVENTURE_API Quest
{
public:
	Quest();
	~Quest();
	int i_ID;
	const char* s_description;
	bool b_completed;

};
