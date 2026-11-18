#pragma once

class CItemGeneric : public CItem /*0x0*/  // sizeof 0xD78, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC64]; // offset 0x0
    bool m_bHasTriggerRadius; // offset 0xC64, size 0x1, align 1 | MNotSaved
    bool m_bHasPickupRadius; // offset 0xC65, size 0x1, align 1 | MNotSaved
    char _pad_0C66[0x2]; // offset 0xC66
    float32 m_flPickupRadiusSqr; // offset 0xC68, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadiusSqr; // offset 0xC6C, size 0x4, align 4 | MNotSaved
    GameTime_t m_flLastPickupCheck; // offset 0xC70, size 0x4, align 255 | MNotSaved
    bool m_bPlayerCounterListenerAdded; // offset 0xC74, size 0x1, align 1 | MNotSaved
    bool m_bPlayerInTriggerRadius; // offset 0xC75, size 0x1, align 1 | MNotSaved
    char _pad_0C76[0x2]; // offset 0xC76
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hSpawnParticleEffect; // offset 0xC78, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pAmbientSoundEffect; // offset 0xC80, size 0x8, align 8 | MNotSaved
    bool m_bAutoStartAmbientSound; // offset 0xC88, size 0x1, align 1 | MNotSaved
    char _pad_0C89[0x7]; // offset 0xC89
    CUtlSymbolLarge m_pSpawnScriptFunction; // offset 0xC90, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hPickupParticleEffect; // offset 0xC98, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupSoundEffect; // offset 0xCA0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupScriptFunction; // offset 0xCA8, size 0x8, align 8 | MNotSaved
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_hTimeoutParticleEffect; // offset 0xCB0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutSoundEffect; // offset 0xCB8, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pTimeoutScriptFunction; // offset 0xCC0, size 0x8, align 8 | MNotSaved
    CUtlSymbolLarge m_pPickupFilterName; // offset 0xCC8, size 0x8, align 8 | MNotSaved
    CHandle< CBaseFilter > m_hPickupFilter; // offset 0xCD0, size 0x4, align 4 | MNotSaved
    char _pad_0CD4[0x4]; // offset 0xCD4
    CEntityIOOutput m_OnPickup; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnTimeout; // offset 0xCF0, size 0x18, align 255
    CEntityIOOutput m_OnTriggerStartTouch; // offset 0xD08, size 0x18, align 255
    CEntityIOOutput m_OnTriggerTouch; // offset 0xD20, size 0x18, align 255
    CEntityIOOutput m_OnTriggerEndTouch; // offset 0xD38, size 0x18, align 255
    CUtlSymbolLarge m_pAllowPickupScriptFunction; // offset 0xD50, size 0x8, align 8 | MNotSaved
    float32 m_flPickupRadius; // offset 0xD58, size 0x4, align 4 | MNotSaved
    float32 m_flTriggerRadius; // offset 0xD5C, size 0x4, align 4 | MNotSaved
    CUtlSymbolLarge m_pTriggerSoundEffect; // offset 0xD60, size 0x8, align 8 | MNotSaved
    bool m_bGlowWhenInTrigger; // offset 0xD68, size 0x1, align 1 | MNotSaved
    char _pad_0D69[0x3]; // offset 0xD69
    Color m_glowColor; // offset 0xD6C, size 0x4, align 4 | MNotSaved
    bool m_bUseable; // offset 0xD70, size 0x1, align 1 | MNotSaved
    char _pad_0D71[0x3]; // offset 0xD71
    CHandle< CItemGenericTriggerHelper > m_hTriggerHelper; // offset 0xD74, size 0x4, align 4 | MNotSaved
};
