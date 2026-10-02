#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xCB0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB94]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xB94, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xB95, size 0x1, align 1 | MNotSaved
    char _pad_0B96[0x2]; // offset 0xB96
    float32 m_flPickupRadiusSqr; // offset 0xB98, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xB9C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xBA0, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xBA4, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xBA5, size 0x1, align 1 | MNotSaved
    char _pad_0BA6[0x2]; // offset 0xBA6
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xBA8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xBB0, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xBB8, size 0x1, align 1 | MNotSaved
    char _pad_0BB9[0x7]; // offset 0xBB9
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xBC0, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xBC8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xBD0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xBD8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xBE0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xBE8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xBF0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xBF8, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xC00, size 0x4, align 4 | MNotSaved
    char _pad_0C04[0x4]; // offset 0xC04
    CEntityIOOutput m_OnPickup; // offset 0xC08, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xC20, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xC38, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xC50, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xC68, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xC80, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xC88, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xC8C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xC90, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xC98, size 0x1, align 1 | MNotSaved
    char _pad_0C99[0x3]; // offset 0xC99
    Color m_glowColor; // offset 0xC9C, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xCA0, size 0x1, align 1 | MNotSaved
    char _pad_0CA1[0x3]; // offset 0xCA1
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xCA4, size 0x4, align 4 | MNotSaved
    char _pad_0CA8[0x8]; // offset 0xCA8
};
