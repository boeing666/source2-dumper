#pragma once

class CAbilityHornetLeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1680, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    float32 m_flChannelingAirDrag; // offset 0x13A0, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x13A4, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x13A8, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x13AC, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x13B0, size 0x4, align 4
    float32 m_flLaunchAirDrag; // offset 0x13B4, size 0x4, align 4
    float32 m_flLaunchTime; // offset 0x13B8, size 0x4, align 4
    float32 m_flMoveSpeedAboveBaseScale; // offset 0x13BC, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x13C0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x13D0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // offset 0x13E0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x14C0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x15A0, size 0xE0, align 8
};
