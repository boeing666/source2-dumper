#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xE00, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xCEC]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xCEC, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xCED, size 0x1, align 1 | MNotSaved
    char _pad_0CEE[0x2]; // offset 0xCEE
    float32 m_flPickupRadiusSqr; // offset 0xCF0, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xCF4, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xCF8, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xCFC, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xCFD, size 0x1, align 1 | MNotSaved
    char _pad_0CFE[0x2]; // offset 0xCFE
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xD00, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xD08, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xD10, size 0x1, align 1 | MNotSaved
    char _pad_0D11[0x7]; // offset 0xD11
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xD18, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xD20, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xD28, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xD30, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xD38, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xD40, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xD48, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xD50, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xD58, size 0x4, align 4 | MNotSaved
    char _pad_0D5C[0x4]; // offset 0xD5C
    CEntityIOOutput m_OnPickup; // offset 0xD60, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xD78, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xD90, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xDA8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xDC0, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xDD8, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xDE0, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xDE4, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xDE8, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xDF0, size 0x1, align 1 | MNotSaved
    Color m_glowColor; // offset 0xDF1, size 0x4, align 1 | MNotSaved
    bool m_bUseable; // offset 0xDF5, size 0x1, align 1 | MNotSaved
    char _pad_0DF6[0x2]; // offset 0xDF6
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    char _pad_0DFC[0x4]; // offset 0xDFC
};
