#pragma once

class CFootStepTriggerItem  // sizeof 0x40, align 0x8 (animgraphdoclib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyElementNameFn}
{
public:
    CUtlString m_footName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
    StepPhase m_triggerPhase; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_000C[0x4]; // offset 0xC
    CUtlVector< CGlobalSymbol > m_tagNames; // offset 0x10, size 0x18, align 8 | MPropertySuppressField
    CUtlVector< AnimTagID > m_tagIDs; // offset 0x28, size 0x18, align 8 | MPropertyFriendlyName MPropertyAttributeChoiceName
};
