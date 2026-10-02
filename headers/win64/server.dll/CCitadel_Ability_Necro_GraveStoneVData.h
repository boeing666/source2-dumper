#pragma once

class CCitadel_Ability_Necro_GraveStoneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1610, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastWarningParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSummonGravestoneSound; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GraveStoneModifier; // offset 0x14D8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ZombieSummonModifier; // offset 0x14E8, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x14F8, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStoneSubmergeMinDepth; // offset 0x15D8, size 0x4, align 4
    float32 m_flStoneSubmergeMaxDepth; // offset 0x15DC, size 0x4, align 4
    float32 m_flStonePitchMinOffset; // offset 0x15E0, size 0x4, align 4
    float32 m_flStonePitchMaxOffset; // offset 0x15E4, size 0x4, align 4
    float32 m_flStoneRollMinOffset; // offset 0x15E8, size 0x4, align 4
    float32 m_flStoneRollMaxOffset; // offset 0x15EC, size 0x4, align 4
    float32 m_flStoneYawMinOffset; // offset 0x15F0, size 0x4, align 4
    float32 m_flStoneYawMaxOffset; // offset 0x15F4, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x15F8, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x15FC, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1600, size 0x4, align 4
    float32 m_flNavMeshSearchRadius; // offset 0x1604, size 0x4, align 4
    bool m_bAllowStackingDamageFromGun; // offset 0x1608, size 0x1, align 1
    char _pad_1609[0x7]; // offset 0x1609
};
