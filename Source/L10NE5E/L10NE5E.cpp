// Copyright Epic Games, Inc. All Rights Reserved.

#include "L10NE5E.h"
#include "Modules/ModuleManager.h"

#include "Internationalization/StringTableRegistry.h"

void FL10NE5EGameModuleImpl::StartupModule()
{
	FDefaultGameModuleImpl::StartupModule();

	LOCTABLE_FROMFILE_GAME("ST_Sample", "ST_Sample", "StringTables/ST_Sample.csv");
}

void FL10NE5EGameModuleImpl::ShutdownModule()
{
	FDefaultGameModuleImpl::ShutdownModule();
}

IMPLEMENT_PRIMARY_GAME_MODULE(FL10NE5EGameModuleImpl, L10NE5E, "L10NE5E");