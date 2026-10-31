#pragma once

class CCitadel_UtilityUpgrade_RocketBoosterVData : public CCitadel_UtilityUpgrade_RocketBootsVData /*0x0*/  // sizeof 0x1590, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1288]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_LandingParticle; // offset 0x1288, size 0xE0, align 8 | MPropertyStartGroup
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_AoEPreviewParticle; // offset 0x1368, size 0xE0, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_DropDownStartParticle; // offset 0x1448, size 0xE0, align 8
    CSoundEventName m_DropDownStartSound; // offset 0x1528, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_LandingSound; // offset 0x1538, size 0x10, align 8
    CSoundEventName m_strInAirLoopingSound; // offset 0x1548, size 0x10, align 8
    float32 m_VelocityPitchScaleMin; // offset 0x1558, size 0x4, align 4
    float32 m_VelocityPitchScaleMax; // offset 0x155C, size 0x4, align 4
    float32 m_VelocityVolScaleMin; // offset 0x1560, size 0x4, align 4
    float32 m_VelocityVolScaleMax; // offset 0x1564, size 0x4, align 4
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x1568, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BarrierModifier; // offset 0x1578, size 0x10, align 8
    float32 m_flSlamEnabledTime; // offset 0x1588, size 0x4, align 4 | MPropertyStartGroup
    char _pad_158C[0x4]; // offset 0x158C
};
