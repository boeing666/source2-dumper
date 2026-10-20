#pragma once

class CCitadel_Ability_Artist_TetherVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1240, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_ImpactParticle; // offset 0x1070, size 0xE0, align 8 | MPropertyStartGroup
    CSoundEventName m_strTetherHitConfirmSound; // offset 0x1150, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strFailSound; // offset 0x1160, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuildupModifier; // offset 0x1170, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SelfModifier; // offset 0x1180, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_StunModifier; // offset 0x1190, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_SuccessModifier; // offset 0x11A0, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x11B0, size 0x10, align 8
    float32 m_flMinimumCancelDelay; // offset 0x11C0, size 0x4, align 4 | MPropertyStartGroup
    bool m_bBuildupRequiresLook; // offset 0x11C4, size 0x1, align 1
    bool m_bBuildupRequiresRange; // offset 0x11C5, size 0x1, align 1
    bool m_bBuildupRequiresLOS; // offset 0x11C6, size 0x1, align 1
    bool m_bShouldVOOnProc; // offset 0x11C7, size 0x1, align 1
    bool m_bShouldDropPickupOnproc; // offset 0x11C8, size 0x1, align 1
    bool m_bShouldUseProjectiles; // offset 0x11C9, size 0x1, align 1
    char _pad_11CA[0x2]; // offset 0x11CA
    float32 m_flBuildupGracePeriod; // offset 0x11CC, size 0x4, align 4
    bool m_bUseDesatVolumes; // offset 0x11D0, size 0x1, align 1
    char _pad_11D1[0x3]; // offset 0x11D1
    Color aimColorDesat; // offset 0x11D4, size 0x4, align 4
    Color aimColorSat; // offset 0x11D8, size 0x4, align 4
    Color aimColorOutline; // offset 0x11DC, size 0x4, align 4
    float32 m_flSatVolumeInnerConeSize; // offset 0x11E0, size 0x4, align 4
    char _pad_11E4[0x4]; // offset 0x11E4
    CPiecewiseCurve m_flSatVolumeConeCurve; // offset 0x11E8, size 0x40, align 8
    float32 m_flMashProtectionTime; // offset 0x1228, size 0x4, align 4
    char _pad_122C[0x4]; // offset 0x122C
    CGlobalSymbol m_strAG2HeroActionPostCastSuccess; // offset 0x1230, size 0x8, align 8 | MPropertyStartGroup
    CGlobalSymbol m_strAG2HeroActionPostCastFail; // offset 0x1238, size 0x8, align 8
};
