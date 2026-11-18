#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xA98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x984]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0x984, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0x985, size 0x1, align 1 | MNotSaved
    char _pad_0986[0x2]; // offset 0x986
    float32 m_flPickupRadiusSqr; // offset 0x988, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0x98C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0x990, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0x994, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0x995, size 0x1, align 1 | MNotSaved
    char _pad_0996[0x2]; // offset 0x996
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0x998, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0x9A0, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0x9A8, size 0x1, align 1 | MNotSaved
    char _pad_09A9[0x7]; // offset 0x9A9
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0x9B0, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0x9B8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0x9C0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0x9C8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0x9D0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0x9D8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0x9E0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0x9E8, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0x9F0, size 0x4, align 4 | MNotSaved
    char _pad_09F4[0x4]; // offset 0x9F4
    CEntityIOOutput m_OnPickup; // offset 0x9F8, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xA10, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xA28, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xA40, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xA58, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xA70, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xA78, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xA7C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xA80, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xA88, size 0x1, align 1 | MNotSaved
    char _pad_0A89[0x3]; // offset 0xA89
    Color m_glowColor; // offset 0xA8C, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xA90, size 0x1, align 1 | MNotSaved
    char _pad_0A91[0x3]; // offset 0xA91
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xA94, size 0x4, align 4 | MNotSaved
};
