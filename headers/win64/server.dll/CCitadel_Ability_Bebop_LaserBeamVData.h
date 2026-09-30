#pragma once

class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1778, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x13B0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCancelCooldown; // offset 0x1490, size 0x4, align 4 | MPropertyStartGroup
    char _pad_1494[0x4]; // offset 0x1494
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1498, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x1578, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1658, size 0xE0, align 8
    CSoundEventName m_strLaserStartSound; // offset 0x1738, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserEndSound; // offset 0x1748, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1758, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0x1768, size 0x10, align 8
};
