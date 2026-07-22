#pragma once

class CDOTA_Ability_WitchDoctor_DeathWard : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CHandle< CBaseEntity > m_hWard; // offset 0x580, size 0x4, align 4
    int32 bonus_accuracy; // offset 0x584, size 0x4, align 4
    int32 m_iDamage; // offset 0x588, size 0x4, align 4
    int32 m_iBounceRadius; // offset 0x58C, size 0x4, align 4
    int32 m_iProjectileSpeed; // offset 0x590, size 0x4, align 4
    GameTime_t m_fWardExpireTime; // offset 0x594, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x598, size 0x4, align 255
    char _pad_059C[0x4]; // offset 0x59C
    CUtlVector< sBounceInfo > m_BounceInfo; // offset 0x5A0, size 0x18, align 8
};
