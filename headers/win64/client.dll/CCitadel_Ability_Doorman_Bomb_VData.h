#pragma once

class CCitadel_Ability_Doorman_Bomb_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1B58, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MiniExplodeParticle; // offset 0x18F8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x19D8, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1AB8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ImpactSound; // offset 0x1AC8, size 0x10, align 8
    CSoundEventName m_HitConfirmSound; // offset 0x1AD8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InaccuracyModifier; // offset 0x1AE8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_AuraModifier; // offset 0x1AF8, size 0x10, align 8
    CPiecewiseCurve m_ProjectileDragCurve; // offset 0x1B08, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flShakeAmp; // offset 0x1B48, size 0x4, align 4
    float32 m_flShakeFreq; // offset 0x1B4C, size 0x4, align 4
    float32 m_flShakeDuration; // offset 0x1B50, size 0x4, align 4
    char _pad_1B54[0x4]; // offset 0x1B54
};
