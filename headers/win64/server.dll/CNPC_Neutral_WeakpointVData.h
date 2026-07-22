#pragma once

class CNPC_Neutral_WeakpointVData : public CEntitySubclassVDataBase /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    float32 m_flBonusDamageMult; // offset 0x28, size 0x4, align 4
    float32 m_flDamageOnDeath; // offset 0x2C, size 0x4, align 4
    float32 m_flGoldPercent; // offset 0x30, size 0x4, align 4
    float32 m_flMaxHealth; // offset 0x34, size 0x4, align 4
    float32 m_flCollisionRadius; // offset 0x38, size 0x4, align 4
    float32 m_flParticleRadius; // offset 0x3C, size 0x4, align 4
    float32 m_flStunDuration; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AmbientParticle; // offset 0x48, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DestroyParticle; // offset 0x128, size 0xE0, align 8
    CSoundEventName m_strDestroySound; // offset 0x208, size 0x10, align 8
};
