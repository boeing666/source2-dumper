#pragma once

class CCitadel_Ability_Boho_RideBroomVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x16C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    float32 m_flChannelingAirDrag; // offset 0x13E8, size 0x4, align 4
    float32 m_flChannelingMaxFallSpeed; // offset 0x13EC, size 0x4, align 4
    float32 m_flVerticalMoveSpeedPercent; // offset 0x13F0, size 0x4, align 4
    float32 m_flAirDrag; // offset 0x13F4, size 0x4, align 4
    float32 m_flAirAcceleration; // offset 0x13F8, size 0x4, align 4
    float32 m_flLaunchAirDrag; // offset 0x13FC, size 0x4, align 4
    float32 m_flLaunchTime; // offset 0x1400, size 0x4, align 4
    float32 m_flMoveSpeedAboveBaseScale; // offset 0x1404, size 0x4, align 4
    float32 m_flMinPitch; // offset 0x1408, size 0x4, align 4
    float32 m_flMaxPitch; // offset 0x140C, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_LeapModifier; // offset 0x1410, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DustParticle; // offset 0x1420, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_TrailParticle; // offset 0x1500, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastParticle; // offset 0x15E0, size 0xE0, align 8
};
