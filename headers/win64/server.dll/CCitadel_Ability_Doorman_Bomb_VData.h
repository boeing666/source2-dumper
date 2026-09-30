#pragma once

class CCitadel_Ability_Doorman_Bomb_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16E0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ExplodeParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_MiniExplodeParticle; // offset 0x1480, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1560, size 0xE0, align 8
    CSoundEventName m_ExplosionSound; // offset 0x1640, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_ImpactSound; // offset 0x1650, size 0x10, align 8
    CSoundEventName m_HitConfirmSound; // offset 0x1660, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_InaccuracyModifier; // offset 0x1670, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifierAura > m_AuraModifier; // offset 0x1680, size 0x10, align 8
    CPiecewiseCurve m_ProjectileDragCurve; // offset 0x1690, size 0x40, align 8 | MPropertyStartGroup
    float32 m_flShakeAmp; // offset 0x16D0, size 0x4, align 4
    float32 m_flShakeFreq; // offset 0x16D4, size 0x4, align 4
    float32 m_flShakeDuration; // offset 0x16D8, size 0x4, align 4
    char _pad_16DC[0x4]; // offset 0x16DC
};
