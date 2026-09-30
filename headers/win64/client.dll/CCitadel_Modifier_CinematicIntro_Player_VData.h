#pragma once

class CCitadel_Modifier_CinematicIntro_Player_VData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    float32 m_flZiplineStartDelayDuration; // offset 0x760, size 0x4, align 4
    char _pad_0764[0x4]; // offset 0x764
    CUtlVector< PostProcessEffectDef_t > m_vecPostProcessEffects; // offset 0x768, size 0x18, align 8
    bool m_bTeamSpecificCameras; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceAmber; // offset 0x788, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequenceSapphire; // offset 0x7A0, size 0x18, align 8 | MPropertySuppressExpr
    CUtlVector< IntroCamera_t > m_vecIntroCameraSequence; // offset 0x7B8, size 0x18, align 8 | MPropertySuppressExpr
};
