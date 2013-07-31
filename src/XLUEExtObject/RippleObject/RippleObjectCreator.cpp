/********************************************************************
/* Copyright (c) 2013 The BOLT UIEngine. All rights reserved.
/* Use of this source code is governed by a BOLT license that can be
/* found in the LICENSE file.
********************************************************************/ 
#include "stdafx.h"
#include "./RippleObjectCreator.h"

RippleObjectCreator::RippleObjectCreator(void)
{
}

RippleObjectCreator::~RippleObjectCreator(void)
{
}

RippleObject* RippleObjectCreator::CreateObj( const char* lpObjClass, XLUE_LAYOUTOBJ_HANDLE hObj )
{
	assert(lpObjClass);
	assert(hObj);

	return new RippleObject(hObj);
}

void RippleObjectCreator::DestroyObj( RippleObject* lpObj )
{
	assert(lpObj);

	delete lpObj;
}