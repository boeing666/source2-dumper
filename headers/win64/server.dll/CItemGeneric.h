#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xA38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x924]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0x924, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0x925, size 0x1, align 1 | MNotSaved
    char _pad_0926[0x2]; // offset 0x926
    float32 m_flPickupRadiusSqr; // offset 0x928, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0x92C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0x930, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0x934, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0x935, size 0x1, align 1 | MNotSaved
    char _pad_0936[0x2]; // offset 0x936
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0x938, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0x940, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0x948, size 0x1, align 1 | MNotSaved
    char _pad_0949[0x7]; // offset 0x949
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0x950, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0x958, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0x960, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0x968, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0x970, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0x978, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0x980, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0x988, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0x990, size 0x4, align 4 | MNotSaved
    char _pad_0994[0x4]; // offset 0x994
    CEntityIOOutput m_OnPickup; // offset 0x998, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0x9B0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0x9C8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0x9E0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0x9F8, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xA10, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xA18, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xA1C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xA20, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xA28, size 0x1, align 1 | MNotSaved
    char _pad_0A29[0x3]; // offset 0xA29
    Color m_glowColor; // offset 0xA2C, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xA30, size 0x1, align 1 | MNotSaved
    char _pad_0A31[0x3]; // offset 0xA31
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xA34, size 0x4, align 4 | MNotSaved
};
