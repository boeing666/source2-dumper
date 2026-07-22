#pragma once

class C_DOTA_Ability_WitchDoctor_DeathWard : public C_DOTABaseAbility /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x824]; // offset 0x0
    CHandle< C_BaseEntity > m_hWard; // offset 0x824, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x828, size 0x4, align 4
    int32 m_iDamage; // offset 0x82C, size 0x4, align 4
    int32 m_iBounceRadius; // offset 0x830, size 0x4, align 4
    int32 m_iProjectileSpeed; // offset 0x834, size 0x4, align 4
    GameTime_t m_fWardExpireTime; // offset 0x838, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x83C, size 0x4, align 255
    CUtlVector< sBounceInfo > m_BounceInfo; // offset 0x840, size 0x18, align 8
};
