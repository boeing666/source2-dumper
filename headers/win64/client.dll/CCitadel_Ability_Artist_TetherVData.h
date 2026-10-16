#pragma once

class CCitadel_Ability_Artist_TetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x15B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x13E8, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strTetherHitConfirmSound; // offset 0x14C8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFailSound; // offset 0x14D8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuildupModifier; // offset 0x14E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x14F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x1508, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // offset 0x1518, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x1528, size 0x10, align 8
    float32 m_flMinimumCancelDelay; // offset 0x1538, size 0x4, align 4 | MPropertyStartGroup
    bool m_bBuildupRequiresLook; // offset 0x153C, size 0x1, align 1
    bool m_bBuildupRequiresRange; // offset 0x153D, size 0x1, align 1
    bool m_bBuildupRequiresLOS; // offset 0x153E, size 0x1, align 1
    bool m_bShouldVOOnProc; // offset 0x153F, size 0x1, align 1
    bool m_bShouldDropPickupOnproc; // offset 0x1540, size 0x1, align 1
    bool m_bShouldUseProjectiles; // offset 0x1541, size 0x1, align 1
    char _pad_1542[0x2]; // offset 0x1542
    float32 m_flBuildupGracePeriod; // offset 0x1544, size 0x4, align 4
    bool m_bUseDesatVolumes; // offset 0x1548, size 0x1, align 1
    char _pad_1549[0x3]; // offset 0x1549
    Color aimColorDesat; // offset 0x154C, size 0x4, align 4
    Color aimColorSat; // offset 0x1550, size 0x4, align 4
    Color aimColorOutline; // offset 0x1554, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x1558, size 0x4, align 4
    char _pad_155C[0x4]; // offset 0x155C
    CPiecewiseCurve m_flSatVolumeConeCurve; // offset 0x1560, size 0x40, align 8
    float32 m_flMashProtectionTime; // offset 0x15A0, size 0x4, align 4
    char _pad_15A4[0x4]; // offset 0x15A4
    CGlobalSymbol m_strAG2HeroActionPostCastSuccess; // offset 0x15A8, size 0x8, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strAG2HeroActionPostCastFail; // offset 0x15B0, size 0x8, align 8
};
