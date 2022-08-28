// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

void UMyBlueprintFunctionLibrary::SetMaterialInstanceStaticSwitchParameterValue(UMaterialInstance* Instance, FName ParameterName, bool Value)
{/*
	FStaticParameterSet SParam = Instance->GetStaticParameters();

	for (auto& SwitchParameter : SParam.StaticSwitchParameters)
	{
		if (SwitchParameter.ParameterInfo.Name == ParameterName)
		{
			SwitchParameter.Value = Value;
			break;;
		}
	}
	Instance->UpdateStaticPermutation(SParam);*/
}
