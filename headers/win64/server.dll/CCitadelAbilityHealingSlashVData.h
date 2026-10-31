#pragma once

class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1440, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1088]; // offset 0x0
    float32 m_flEffectSize; // offset 0x1088, size 0x4, align 4
    float32 m_flMaxAttackAngle; // offset 0x108C, size 0x4, align 4
    CRemapFloat m_remapAngleToTime; // offset 0x1090, size 0x10, align 255
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x10A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x10B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // offset 0x11A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // offset 0x1280, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1360, size 0xE0, align 8
};
