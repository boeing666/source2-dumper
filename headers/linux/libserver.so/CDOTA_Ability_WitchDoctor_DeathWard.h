#pragma once

class CDOTA_Ability_WitchDoctor_DeathWard : public CDOTABaseAbility /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    CHandle< CBaseEntity > m_hWard; // offset 0x85C, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x860, size 0x4, align 4
    int32 m_iDamage; // offset 0x864, size 0x4, align 4
    int32 m_iBounceRadius; // offset 0x868, size 0x4, align 4
    int32 m_iProjectileSpeed; // offset 0x86C, size 0x4, align 4
    GameTime_t m_fWardExpireTime; // offset 0x870, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x874, size 0x4, align 255
    CUtlVector< sBounceInfo > m_BounceInfo; // offset 0x878, size 0x18, align 8
};
