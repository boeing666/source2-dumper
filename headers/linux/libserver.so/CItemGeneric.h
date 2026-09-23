#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xEE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xDCC]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xDCC, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xDCD, size 0x1, align 1 | MNotSaved
    char _pad_0DCE[0x2]; // offset 0xDCE
    float32 m_flPickupRadiusSqr; // offset 0xDD0, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xDD4, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xDD8, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xDDC, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xDDD, size 0x1, align 1 | MNotSaved
    char _pad_0DDE[0x2]; // offset 0xDDE
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xDE0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xDE8, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xDF0, size 0x1, align 1 | MNotSaved
    char _pad_0DF1[0x7]; // offset 0xDF1
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xDF8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xE00, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xE08, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xE10, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xE18, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xE20, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xE28, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xE30, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xE38, size 0x4, align 4 | MNotSaved
    char _pad_0E3C[0x4]; // offset 0xE3C
    CEntityIOOutput m_OnPickup; // offset 0xE40, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xE58, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xE70, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xE88, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xEA0, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xEB8, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xEC0, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xEC4, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xEC8, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xED0, size 0x1, align 1 | MNotSaved
    char _pad_0ED1[0x3]; // offset 0xED1
    Color m_glowColor; // offset 0xED4, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xED8, size 0x1, align 1 | MNotSaved
    char _pad_0ED9[0x3]; // offset 0xED9
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xEDC, size 0x4, align 4 | MNotSaved
};
