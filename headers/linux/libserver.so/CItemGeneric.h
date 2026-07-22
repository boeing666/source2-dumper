#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB1C]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xB1C, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xB1D, size 0x1, align 1 | MNotSaved
    char _pad_0B1E[0x2]; // offset 0xB1E
    float32 m_flPickupRadiusSqr; // offset 0xB20, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xB24, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xB28, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xB2C, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xB2D, size 0x1, align 1 | MNotSaved
    char _pad_0B2E[0x2]; // offset 0xB2E
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xB30, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xB38, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xB40, size 0x1, align 1 | MNotSaved
    char _pad_0B41[0x7]; // offset 0xB41
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xB48, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xB50, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xB58, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xB60, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xB68, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xB70, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xB78, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xB80, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xB88, size 0x4, align 4 | MNotSaved
    char _pad_0B8C[0x4]; // offset 0xB8C
    CEntityIOOutput m_OnPickup; // offset 0xB90, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xBA8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xBC0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xBD8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xBF0, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xC08, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xC10, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xC14, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xC18, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xC20, size 0x1, align 1 | MNotSaved
    Color m_glowColor; // offset 0xC21, size 0x4, align 1 | MNotSaved
    bool m_bUseable; // offset 0xC25, size 0x1, align 1 | MNotSaved
    char _pad_0C26[0x2]; // offset 0xC26
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xC28, size 0x4, align 4 | MNotSaved
    char _pad_0C2C[0x4]; // offset 0xC2C
};
