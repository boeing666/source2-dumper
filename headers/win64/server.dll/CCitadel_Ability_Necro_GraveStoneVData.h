#pragma once

class CCitadel_Ability_Necro_GraveStoneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastWarningParticle; // offset 0x13A0, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSummonGravestoneSound; // offset 0x1480, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GraveStoneModifier; // offset 0x1490, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ZombieSummonModifier; // offset 0x14A0, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x14B0, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStoneSubmergeMinDepth; // offset 0x1590, size 0x4, align 4
    float32 m_flStoneSubmergeMaxDepth; // offset 0x1594, size 0x4, align 4
    float32 m_flStonePitchMinOffset; // offset 0x1598, size 0x4, align 4
    float32 m_flStonePitchMaxOffset; // offset 0x159C, size 0x4, align 4
    float32 m_flStoneRollMinOffset; // offset 0x15A0, size 0x4, align 4
    float32 m_flStoneRollMaxOffset; // offset 0x15A4, size 0x4, align 4
    float32 m_flStoneYawMinOffset; // offset 0x15A8, size 0x4, align 4
    float32 m_flStoneYawMaxOffset; // offset 0x15AC, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x15B0, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x15B4, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x15B8, size 0x4, align 4
    float32 m_flNavMeshSearchRadius; // offset 0x15BC, size 0x4, align 4
    bool m_bAllowStackingDamageFromGun; // offset 0x15C0, size 0x1, align 1
    char _pad_15C1[0x7]; // offset 0x15C1
};
