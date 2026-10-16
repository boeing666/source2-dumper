#pragma once

class CCitadel_Modifier_Chessmaster_DamageAuraVData : public CCitadelModifierAuraVData /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    bool m_bShouldDamageOnAura; // offset 0x7E8, size 0x1, align 1 | MPropertyStartGroup
    bool m_bShouldPulseOnAuraCreation; // offset 0x7E9, size 0x1, align 1
    bool m_bShouldPulseOnlyOffCooldown; // offset 0x7EA, size 0x1, align 1
    char _pad_07EB[0x1]; // offset 0x7EB
    float32 m_flPulseDelay; // offset 0x7EC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_TargetModifier; // offset 0x7F0, size 0x10, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AuraParticle; // offset 0x800, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LaserParticle; // offset 0x8E0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_PulseParticle; // offset 0x9C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DamageParticle; // offset 0xAA0, size 0xE0, align 8
    CSoundEventName m_strBeamLoopStartSound; // offset 0xB80, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strBeamLoopSound; // offset 0xB90, size 0x10, align 8
    CSoundEventName m_strBeamHitSound; // offset 0xBA0, size 0x10, align 8
};
