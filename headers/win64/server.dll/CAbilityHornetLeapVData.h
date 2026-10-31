#pragma once

class CAbilityHornetLeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1360, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    float32 m_flChannelingAirDrag; // offset 0x1080, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x1084, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x1088, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x108C, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x1090, size 0x4, align 4
    float32 m_flLaunchAirDrag; // offset 0x1094, size 0x4, align 4
    float32 m_flLaunchTime; // offset 0x1098, size 0x4, align 4
    float32 m_flMoveSpeedAboveBaseScale; // offset 0x109C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x10A0, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x10B0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // offset 0x10C0, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x11A0, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1280, size 0xE0, align 8
};
