#pragma once

class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x17A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13F0]; // offset 0x0
    float32 m_flEffectSize; // offset 0x13F0, size 0x4, align 4
    float32 m_flMaxAttackAngle; // offset 0x13F4, size 0x4, align 4
    CRemapFloat m_remapAngleToTime; // offset 0x13F8, size 0x10, align 255
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1408, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x1418, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1428, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // offset 0x1508, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // offset 0x15E8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x16C8, size 0xE0, align 8
};
