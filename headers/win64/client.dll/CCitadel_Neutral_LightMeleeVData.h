#pragma once

class CCitadel_Neutral_LightMeleeVData : public CModifierNeutralAbilityVData /*0x0*/  // sizeof 0x1330, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1140]; // offset 0x0
    float32 m_flForwardOffset; // offset 0x1140, size 0x4, align 4
    float32 m_flMeleeRadius; // offset 0x1144, size 0x4, align 4
    float32 m_flDamage; // offset 0x1148, size 0x4, align 4
    char _pad_114C[0x4]; // offset 0x114C
    CSoundEventName m_strAttackHitSound; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strAttackMissSound; // offset 0x1160, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeSwingParticle; // offset 0x1170, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MeleeImpactParticle; // offset 0x1250, size 0xE0, align 8
};
