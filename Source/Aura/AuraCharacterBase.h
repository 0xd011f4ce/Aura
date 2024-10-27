// Copyright (c) 0xd011f4ce

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "AuraCharacterBase.generated.h"

UCLASS ()
class AURA_API AAuraCharacterBase : public ACharacter
{
  GENERATED_BODY ()

public:
  AAuraCharacterBase ();

  virtual void Tick (float DeltaTime) override;

  virtual void SetupPlayerInputComponent (
      class UInputComponent *PlayerInputComponent) override;

protected:
  virtual void BeginPlay () override;
};