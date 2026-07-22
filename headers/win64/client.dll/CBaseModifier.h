#pragma once

class CBaseModifier  // sizeof 0x90, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x28]; // offset 0x0
    ModifierSerialNumber_t m_nSerialNumber; // offset 0x28, size 0x4, align 255
    GameTime_t m_flLastAppliedTime; // offset 0x2C, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0x30, size 0x4, align 255
    float32 m_flDuration; // offset 0x34, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCaster; // offset 0x38, size 0x4, align 4
    CHandle< C_BaseEntity > m_hAbility; // offset 0x3C, size 0x4, align 4
    CModifierHandleBase m_hAuraProvider; // offset 0x40, size 0x18, align 255
    bool m_bInAuraRange; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    CUtlStringToken m_nAbilitySubclassID; // offset 0x5C, size 0x4, align 4
    uint8 m_iAttributes; // offset 0x60, size 0x1, align 1
    uint8 m_iTeam; // offset 0x61, size 0x1, align 1
    int16 m_iStackCount; // offset 0x62, size 0x2, align 2
    int16 m_iMaxStackCount; // offset 0x64, size 0x2, align 2
    char _pad_0066[0x2]; // offset 0x66
    CUtlVector< GameTime_t >* m_pVecStackDecayTimes; // offset 0x68, size 0x8, align 8 | MNotSaved
    uint8 m_eDestroyReason; // offset 0x70, size 0x1, align 1
    bool m_bDisabled; // offset 0x71, size 0x1, align 1
    bool m_bSuppressSendModifier; // offset 0x72, size 0x1, align 1
    char _pad_0073[0x1]; // offset 0x73
    float32 m_flThinkInterval; // offset 0x74, size 0x4, align 4
    GameTime_t m_flThinkIntervalStartTime; // offset 0x78, size 0x4, align 255
    float32 m_flTimeScale; // offset 0x7C, size 0x4, align 4
    CUtlVector< IModifierTrackedObject* >* m_pVecTrackedObjects; // offset 0x80, size 0x8, align 8 | MNotSaved
    ModifierRuntimeHandle_t m_hModifierListHandle; // offset 0x88, size 0x4, align 255 | MNotSaved
    char _pad_008C[0x4]; // offset 0x8C
};
