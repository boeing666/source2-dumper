#pragma once

class CCitadel_Ability_Boho_RideBroomVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1678, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
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
    float32 m_flMinPitch; // offset 0x13C0, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x13C4, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x13C8, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // offset 0x13D8, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x14B8, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1598, size 0xE0, align 8
};
