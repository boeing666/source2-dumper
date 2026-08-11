#pragma once

class CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x860*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x86C]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x86C, size 0xC, align 4
    float32 hook_speed; // offset 0x878, size 0x4, align 4
    int32 hook_width; // offset 0x87C, size 0x4, align 4
    int32 hook_distance; // offset 0x880, size 0x4, align 4
    bool m_bRetracting; // offset 0x884, size 0x1, align 1
    bool m_bDiedInHook; // offset 0x885, size 0x1, align 1
    char _pad_0886[0x2]; // offset 0x886
    CHandle< CBaseEntity > m_hVictim; // offset 0x888, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x88C, size 0xC, align 4
    VectorWS m_vCasterPosition; // offset 0x898, size 0xC, align 4
    bool m_bChainDetached; // offset 0x8A4, size 0x1, align 1
    char _pad_08A5[0x3]; // offset 0x8A5
    ParticleIndex_t m_iChainParticle; // offset 0x8A8, size 0x4, align 255
    int32 m_iHookParticle; // offset 0x8AC, size 0x4, align 4
    int32 m_nManaCost; // offset 0x8B0, size 0x4, align 4
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x8B4, size 0x4, align 4
    ParticleIndex_t m_nPreviewFX; // offset 0x8B8, size 0x4, align 255
    char _pad_08BC[0x4]; // offset 0x8BC
};
