#pragma once

class CCitadel_Modifier_Artist_EnhancedSlideVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x8E0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x798]; // offset 0x0
    CSoundEventName m_strSlidingLoopingSound; // offset 0x798, size 0x10, align 8 | MPropertyGroupName
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_SlideParticle; // offset 0x7A8, size 0xE0, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_DamageAmpModifier; // offset 0x888, size 0x10, align 8 | MPropertyGroupName
    bool m_bOnlyBonusDuringSlide; // offset 0x898, size 0x1, align 1 | MPropertyStartGroup
    bool m_bDoCatchupSpeed; // offset 0x899, size 0x1, align 1
    bool m_bAllowSlideDashJump; // offset 0x89A, size 0x1, align 1
    char _pad_089B[0x5]; // offset 0x89B
    CPiecewiseCurve m_flCatchupSpeedCurve; // offset 0x8A0, size 0x40, align 8
};
