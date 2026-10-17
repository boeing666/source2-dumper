#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xD10, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBFC]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xBFC, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xBFD, size 0x1, align 1 | MNotSaved
    char _pad_0BFE[0x2]; // offset 0xBFE
    float32 m_flPickupRadiusSqr; // offset 0xC00, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xC04, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xC08, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xC0C, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xC0D, size 0x1, align 1 | MNotSaved
    char _pad_0C0E[0x2]; // offset 0xC0E
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xC10, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xC18, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xC20, size 0x1, align 1 | MNotSaved
    char _pad_0C21[0x7]; // offset 0xC21
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xC28, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xC30, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xC38, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xC40, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xC48, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xC50, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xC58, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xC60, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xC68, size 0x4, align 4 | MNotSaved
    char _pad_0C6C[0x4]; // offset 0xC6C
    CEntityIOOutput m_OnPickup; // offset 0xC70, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xC88, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xCA0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xCB8, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xCD0, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xCE8, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xCF0, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xCF4, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xCF8, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xD00, size 0x1, align 1 | MNotSaved
    char _pad_0D01[0x3]; // offset 0xD01
    Color m_glowColor; // offset 0xD04, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xD08, size 0x1, align 1 | MNotSaved
    char _pad_0D09[0x3]; // offset 0xD09
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xD0C, size 0x4, align 4 | MNotSaved
};
