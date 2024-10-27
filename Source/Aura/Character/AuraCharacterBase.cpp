// Copyright (c) 0xd011f4ce

#include "AuraCharacterBase.h"

AAuraCharacterBase::AAuraCharacterBase ()
{
  PrimaryActorTick.bCanEverTick = false;
}

void
AAuraCharacterBase::BeginPlay ()
{
  Super::BeginPlay ();
}