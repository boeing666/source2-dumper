#pragma once

class CCitadelAbilityHealingSlashVData : public CCitadelYamatoBaseVData /*0x0*/  // sizeof 0x1BE8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1820]; // offset 0x0
    float32 m_flEffectSize; // offset 0x1820, size 0x4, align 4
    float32 m_flMaxAttackAngle; // offset 0x1824, size 0x4, align 4
    CRemapFloat m_remapAngleToTime; // offset 0x1828, size 0x10, align 255
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1838, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_BuffModifier; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashParticle; // offset 0x1938, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_HealingSlashSwordGlow; // offset 0x1A18, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1AF8, size 0xE0, align 8
    CSoundEventName m_strDamageTarget; // offset 0x1BD8, size 0x10, align 8 | MPropertyStartGroup
};
