#pragma once

class CCitadel_Neutral_LightMeleeVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x12D8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10E8]; // offset 0x0
    float32 m_flForwardOffset; // offset 0x10E8, size 0x4, align 4
    float32 m_flMeleeRadius; // offset 0x10EC, size 0x4, align 4
    float32 m_flDamage; // offset 0x10F0, size 0x4, align 4
    char _pad_10F4[0x4]; // offset 0x10F4
    CSoundEventName m_strAttackHitSound; // offset 0x10F8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackMissSound; // offset 0x1108, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x1118, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x11F8, size 0xE0, align 8
};
