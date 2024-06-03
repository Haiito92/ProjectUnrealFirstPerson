// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DiscordRpcBlueprint.h"
#include "Engine/GameInstance.h"
#include "DiscordGameInstance.generated.h"

UENUM(BlueprintType)
enum EDiscordPresenceState
{
	Update UMETA(DisplayName = "Update"),
	Clear UMETA(DisplayName = "Clear")
};

/**
 * 
 */
UCLASS()
class DISCORDRPC_API UDiscordGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:	

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
			UDiscordRpc* DiscordRpc;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString ApplicationId;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString OptionalSteamID;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString State;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString Details;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString LargeImageKey;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString LargeImageText;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString SmallImageKey;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
			FString SmallImageText;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString PartyId;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString MatchSecret;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString JoinSecret;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		FString SpectateSecret;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		int PartySize;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		int PartyMax;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
		bool Instance;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Info")
			int64 StampRef;
private:
	virtual void Shutdown() override;

public:

	UFUNCTION(BlueprintCallable, Category = "Info")
		void SetDiscordPresence(EDiscordPresenceState PresenceState);
	UFUNCTION(BlueprintCallable, Category = "Info")
		void SetDiscordPresenceWithTimestampOption(EDiscordPresenceState PresenceState, bool ResetTimestamp);
	UFUNCTION(BlueprintCallable, Category = "Info")
		void SetBasicPresence(FString instate, FString indetails, FString inlargeimagekey, FString inlargeimagetext);
	UFUNCTION(BlueprintCallable, Category = "Info")
		void SetAllPresence(FString instate, FString indetails, FString inlargeimagekey, FString inlargeimagetext, FString insmallimagekey, FString insmallimagetext, FString inpartyid, FString inmatchsecret, FString injoinsecret, FString inspectatesecret, int inpartysize, int inpartymax, bool ininstance);
	UFUNCTION(BlueprintCallable, Category = "Info")
		void SetAppIDs(FString inapplicationid, FString inoptionalsteamid);
};
