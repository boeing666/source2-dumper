#pragma once

class CAbilityHornetLeapVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1AF8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    float32 m_flChannelingAirDrag; // offset 0x1818, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x181C, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x1820, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x1824, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x1828, size 0x4, align 4
    float32 m_flLaunchAirDrag; // offset 0x182C, size 0x4, align 4
    float32 m_flLaunchTime; // offset 0x1830, size 0x4, align 4
    float32 m_flMoveSpeedAboveBaseScale; // offset 0x1834, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1838, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_KillCheckModifier; // offset 0x1848, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // offset 0x1858, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x1938, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x1A18, size 0xE0, align 8
};
