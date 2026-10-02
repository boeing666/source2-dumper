#pragma once

class CCitadel_Modifier_CinematicIntro_Player_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    float32 m_flZiplineStartDelayDuration; // offset 0x790, size 0x4, align 4
    char _pad_0794[0x4]; // offset 0x794
    CUtlVector< PostProcessEffectDef_t > m_vecPostProcessEffects; // offset 0x798, size 0x18, align 8
    bool m_bTeamSpecificCameras; // offset 0x7B0, size 0x1, align 1
    char _pad_07B1[0x7]; // offset 0x7B1
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceAmber; // offset 0x7B8, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceSapphire; // offset 0x7D0, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequence; // offset 0x7E8, size 0x18, align 8 | MPropertySuppressExpr
};
