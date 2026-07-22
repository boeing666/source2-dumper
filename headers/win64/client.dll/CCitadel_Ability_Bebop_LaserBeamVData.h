#pragma once

class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1BF0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x1818, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x1828, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCancelCooldown; // offset 0x1908, size 0x4, align 4 | MPropertyStartGroup
    char _pad_190C[0x4]; // offset 0x190C
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x1910, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x19F0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x1AD0, size 0xE0, align 8
    CSoundEventName m_strLaserStartSound; // offset 0x1BB0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserEndSound; // offset 0x1BC0, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x1BD0, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0x1BE0, size 0x10, align 8
};
