#pragma once

class CCitadel_Modifier_CinematicIntro_Player_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    float32 m_flZiplineStartDelayDuration; // offset 0x750, size 0x4, align 4
    char _pad_0754[0x4]; // offset 0x754
    CUtlVector< PostProcessEffectDef_t > m_vecPostProcessEffects; // offset 0x758, size 0x18, align 8
    bool m_bTeamSpecificCameras; // offset 0x770, size 0x1, align 1
    char _pad_0771[0x7]; // offset 0x771
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceAmber; // offset 0x778, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceSapphire; // offset 0x790, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequence; // offset 0x7A8, size 0x18, align 8 | MPropertySuppressExpr
};
