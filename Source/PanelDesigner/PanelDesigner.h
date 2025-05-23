#pragma once
#include "Modules/ModuleManager.h"



class UPanelDesignerDefinition;

class FPanelDesignerModule : public IModuleInterface
{
public:

    virtual void StartupModule() override;

    TStrongObjectPtr<UPanelDesignerDefinition> DesignerDefinitionInstance;
};