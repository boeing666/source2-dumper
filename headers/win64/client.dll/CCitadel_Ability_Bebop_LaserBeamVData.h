#pragma once

class CCitadel_Ability_Bebop_LaserBeamVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x17C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_RestrictionModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ChargeParticle; // offset 0x13F8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flCancelCooldown; // offset 0x14D8, size 0x4, align 4 | MPropertyStartGroup
    char _pad_14DC[0x4]; // offset 0x14DC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticle; // offset 0x14E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamParticleLocal; // offset 0x15C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_BeamHitParticle; // offset 0x16A0, size 0xE0, align 8
    CSoundEventName m_strLaserStartSound; // offset 0x1780, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strLaserEndSound; // offset 0x1790, size 0x10, align 8
    CSoundEventName m_strLaserLoopSound; // offset 0x17A0, size 0x10, align 8
    CSoundEventName m_strLaserHitSound; // offset 0x17B0, size 0x10, align 8
};
