#pragma once

class C_DOTA_Ability_WitchDoctor_DeathWard : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CHandle< C_BaseEntity > m_hWard; // offset 0x6A8, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x6AC, size 0x4, align 4
    int32 m_iDamage; // offset 0x6B0, size 0x4, align 4
    int32 m_iBounceRadius; // offset 0x6B4, size 0x4, align 4
    int32 m_iProjectileSpeed; // offset 0x6B8, size 0x4, align 4
    GameTime_t m_fWardExpireTime; // offset 0x6BC, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x6C0, size 0x4, align 255
    char _pad_06C4[0x4]; // offset 0x6C4
    CUtlVector< sBounceInfo > m_BounceInfo; // offset 0x6C8, size 0x18, align 8
};
