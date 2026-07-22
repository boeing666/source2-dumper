#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xB30, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA14]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xA14, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xA15, size 0x1, align 1 | MNotSaved
    char _pad_0A16[0x2]; // offset 0xA16
    float32 m_flPickupRadiusSqr; // offset 0xA18, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xA1C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xA20, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xA24, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xA25, size 0x1, align 1 | MNotSaved
    char _pad_0A26[0x2]; // offset 0xA26
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xA28, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xA30, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xA38, size 0x1, align 1 | MNotSaved
    char _pad_0A39[0x7]; // offset 0xA39
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xA40, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xA48, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xA50, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xA58, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xA60, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xA68, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xA70, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xA78, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xA80, size 0x4, align 4 | MNotSaved
    char _pad_0A84[0x4]; // offset 0xA84
    CEntityIOOutput m_OnPickup; // offset 0xA88, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xAA0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xAB8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xAD0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xAE8, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xB00, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xB08, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xB0C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xB10, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xB18, size 0x1, align 1 | MNotSaved
    Color m_glowColor; // offset 0xB19, size 0x4, align 1 | MNotSaved
    bool m_bUseable; // offset 0xB1D, size 0x1, align 1 | MNotSaved
    char _pad_0B1E[0x2]; // offset 0xB1E
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xB20, size 0x4, align 4 | MNotSaved
    char _pad_0B24[0xC]; // offset 0xB24
};
