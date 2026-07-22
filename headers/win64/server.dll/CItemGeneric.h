#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB44]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xB44, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xB45, size 0x1, align 1 | MNotSaved
    char _pad_0B46[0x2]; // offset 0xB46
    float32 m_flPickupRadiusSqr; // offset 0xB48, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xB4C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xB50, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xB54, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xB55, size 0x1, align 1 | MNotSaved
    char _pad_0B56[0x2]; // offset 0xB56
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xB58, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xB60, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xB68, size 0x1, align 1 | MNotSaved
    char _pad_0B69[0x7]; // offset 0xB69
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xB70, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xB78, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xB80, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xB88, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xB90, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xB98, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xBA0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xBA8, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xBB0, size 0x4, align 4 | MNotSaved
    char _pad_0BB4[0x4]; // offset 0xBB4
    CEntityIOOutput m_OnPickup; // offset 0xBB8, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xBD0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xBE8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xC00, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xC18, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xC30, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xC38, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xC3C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xC40, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xC48, size 0x1, align 1 | MNotSaved
    Color m_glowColor; // offset 0xC49, size 0x4, align 1 | MNotSaved
    bool m_bUseable; // offset 0xC4D, size 0x1, align 1 | MNotSaved
    char _pad_0C4E[0x2]; // offset 0xC4E
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xC50, size 0x4, align 4 | MNotSaved
    char _pad_0C54[0xC]; // offset 0xC54
};
