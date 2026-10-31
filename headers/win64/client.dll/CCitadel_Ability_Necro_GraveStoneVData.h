#pragma once

class CCitadel_Ability_Necro_GraveStoneVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x12A8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_CastWarningParticle; // offset 0x1080, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strSummonGravestoneSound; // offset 0x1160, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GraveStoneModifier; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_ZombieSummonModifier; // offset 0x1180, size 0x10, align 8
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeCModel > > m_BlockerModel; // offset 0x1190, size 0xE0, align 8 | MPropertyStartGroup
    float32 m_flStoneSubmergeMinDepth; // offset 0x1270, size 0x4, align 4
    float32 m_flStoneSubmergeMaxDepth; // offset 0x1274, size 0x4, align 4
    float32 m_flStonePitchMinOffset; // offset 0x1278, size 0x4, align 4
    float32 m_flStonePitchMaxOffset; // offset 0x127C, size 0x4, align 4
    float32 m_flStoneRollMinOffset; // offset 0x1280, size 0x4, align 4
    float32 m_flStoneRollMaxOffset; // offset 0x1284, size 0x4, align 4
    float32 m_flStoneYawMinOffset; // offset 0x1288, size 0x4, align 4
    float32 m_flStoneYawMaxOffset; // offset 0x128C, size 0x4, align 4
    float32 m_flDropDownRate; // offset 0x1290, size 0x4, align 4
    float32 m_flClimbHeight; // offset 0x1294, size 0x4, align 4
    float32 m_flDistanceAboveGround; // offset 0x1298, size 0x4, align 4
    float32 m_flNavMeshSearchRadius; // offset 0x129C, size 0x4, align 4
    bool m_bAllowStackingDamageFromGun; // offset 0x12A0, size 0x1, align 1
    char _pad_12A1[0x7]; // offset 0x12A1
};
