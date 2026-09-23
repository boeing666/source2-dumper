#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xC10, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAF4]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xAF4, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xAF5, size 0x1, align 1 | MNotSaved
    char _pad_0AF6[0x2]; // offset 0xAF6
    float32 m_flPickupRadiusSqr; // offset 0xAF8, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xAFC, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xB00, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xB04, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xB05, size 0x1, align 1 | MNotSaved
    char _pad_0B06[0x2]; // offset 0xB06
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xB08, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xB10, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xB18, size 0x1, align 1 | MNotSaved
    char _pad_0B19[0x7]; // offset 0xB19
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xB20, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xB28, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xB30, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xB38, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xB40, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xB48, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xB50, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xB58, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xB60, size 0x4, align 4 | MNotSaved
    char _pad_0B64[0x4]; // offset 0xB64
    CEntityIOOutput m_OnPickup; // offset 0xB68, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xB80, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xB98, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xBB0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xBC8, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xBE0, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xBE8, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xBF0, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xBF8, size 0x1, align 1 | MNotSaved
    char _pad_0BF9[0x3]; // offset 0xBF9
    Color m_glowColor; // offset 0xBFC, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xC00, size 0x1, align 1 | MNotSaved
    char _pad_0C01[0x3]; // offset 0xC01
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xC04, size 0x4, align 4 | MNotSaved
    char _pad_0C08[0x8]; // offset 0xC08
};
