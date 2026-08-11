#pragma once

class CDOTA_Ability_Aghsfort_Walrus_Pudge_Harpoon : public CDOTABaseAbility /*0x0*/, public CHorizontalMotionController /*0x580*/  // sizeof 0x5E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    VectorWS m_vProjectileLocation; // offset 0x590, size 0xC, align 4
    float32 hook_speed; // offset 0x59C, size 0x4, align 4
    int32 hook_width; // offset 0x5A0, size 0x4, align 4
    int32 hook_distance; // offset 0x5A4, size 0x4, align 4
    bool m_bRetracting; // offset 0x5A8, size 0x1, align 1
    bool m_bDiedInHook; // offset 0x5A9, size 0x1, align 1
    char _pad_05AA[0x2]; // offset 0x5AA
    CHandle< CBaseEntity > m_hVictim; // offset 0x5AC, size 0x4, align 4
    VectorWS m_vTargetPosition; // offset 0x5B0, size 0xC, align 4
    VectorWS m_vCasterPosition; // offset 0x5BC, size 0xC, align 4
    bool m_bChainDetached; // offset 0x5C8, size 0x1, align 1
    char _pad_05C9[0x3]; // offset 0x5C9
    ParticleIndex_t m_iChainParticle; // offset 0x5CC, size 0x4, align 255
    int32 m_iHookParticle; // offset 0x5D0, size 0x4, align 4
    int32 m_nManaCost; // offset 0x5D4, size 0x4, align 4
    CHandle< CBaseEntity > m_hSourceCaster; // offset 0x5D8, size 0x4, align 4
    ParticleIndex_t m_nPreviewFX; // offset 0x5DC, size 0x4, align 255
};
