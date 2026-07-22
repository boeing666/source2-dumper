#pragma once

class CCitadel_Ability_Necro_GraveStoneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1A40, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastWarningParticle; // offset 0x1818, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSummonGravestoneSound; // offset 0x18F8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GraveStoneModifier; // offset 0x1908, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ZombieSummonModifier; // offset 0x1918, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x1928, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStoneSubmergeMinDepth; // offset 0x1A08, size 0x4, align 4
    float32 m_flStoneSubmergeMaxDepth; // offset 0x1A0C, size 0x4, align 4
    float32 m_flStonePitchMinOffset; // offset 0x1A10, size 0x4, align 4
    float32 m_flStonePitchMaxOffset; // offset 0x1A14, size 0x4, align 4
    float32 m_flStoneRollMinOffset; // offset 0x1A18, size 0x4, align 4
    float32 m_flStoneRollMaxOffset; // offset 0x1A1C, size 0x4, align 4
    float32 m_flStoneYawMinOffset; // offset 0x1A20, size 0x4, align 4
    float32 m_flStoneYawMaxOffset; // offset 0x1A24, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x1A28, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1A2C, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1A30, size 0x4, align 4
    float32 m_flNavMeshSearchRadius; // offset 0x1A34, size 0x4, align 4
    bool m_bAllowStackingDamageFromGun; // offset 0x1A38, size 0x1, align 1
    char _pad_1A39[0x7]; // offset 0x1A39
};
