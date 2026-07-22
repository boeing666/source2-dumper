#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x844]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0x844, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0x845, size 0x1, align 1 | MNotSaved
    char _pad_0846[0x2]; // offset 0x846
    float32 m_flPickupRadiusSqr; // offset 0x848, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0x84C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0x850, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0x854, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0x855, size 0x1, align 1 | MNotSaved
    char _pad_0856[0x2]; // offset 0x856
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0x858, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0x860, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0x868, size 0x1, align 1 | MNotSaved
    char _pad_0869[0x7]; // offset 0x869
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0x870, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0x878, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0x880, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0x888, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0x890, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0x898, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0x8A0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0x8A8, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0x8B0, size 0x4, align 4 | MNotSaved
    char _pad_08B4[0x4]; // offset 0x8B4
    CEntityIOOutput m_OnPickup; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0x8D0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0x8E8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0x900, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0x918, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0x930, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0x938, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0x93C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0x940, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0x948, size 0x1, align 1 | MNotSaved
    Color m_glowColor; // offset 0x949, size 0x4, align 1 | MNotSaved
    bool m_bUseable; // offset 0x94D, size 0x1, align 1 | MNotSaved
    char _pad_094E[0x2]; // offset 0x94E
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0x950, size 0x4, align 4 | MNotSaved
    char _pad_0954[0x4]; // offset 0x954
};
