#pragma once

class CEnvInstructorHint : public CPointEntity /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszReplace_Key; // offset 0x780, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x788, size 0x8, align 8
    int32 m_iTimeout; // offset 0x790, size 0x4, align 4
    int32 m_iDisplayLimit; // offset 0x794, size 0x4, align 4
    CUtlSymbolLarge m_iszIcon_Onscreen; // offset 0x798, size 0x8, align 8
    CUtlSymbolLarge m_iszIcon_Offscreen; // offset 0x7A0, size 0x8, align 8
    CUtlSymbolLarge m_iszCaption; // offset 0x7A8, size 0x8, align 8
    CUtlSymbolLarge m_iszActivatorCaption; // offset 0x7B0, size 0x8, align 8
    Color m_Color; // offset 0x7B8, size 0x4, align 1
    float32 m_fIconOffset; // offset 0x7BC, size 0x4, align 4
    float32 m_fRange; // offset 0x7C0, size 0x4, align 4
    uint8 m_iPulseOption; // offset 0x7C4, size 0x1, align 1
    uint8 m_iAlphaOption; // offset 0x7C5, size 0x1, align 1
    uint8 m_iShakeOption; // offset 0x7C6, size 0x1, align 1
    bool m_bStatic; // offset 0x7C7, size 0x1, align 1
    bool m_bNoOffscreen; // offset 0x7C8, size 0x1, align 1
    bool m_bForceCaption; // offset 0x7C9, size 0x1, align 1
    char _pad_07CA[0x2]; // offset 0x7CA
    int32 m_iInstanceType; // offset 0x7CC, size 0x4, align 4
    bool m_bSuppressRest; // offset 0x7D0, size 0x1, align 1
    char _pad_07D1[0x7]; // offset 0x7D1
    CUtlSymbolLarge m_iszBinding; // offset 0x7D8, size 0x8, align 8
    bool m_bAllowNoDrawTarget; // offset 0x7E0, size 0x1, align 1
    bool m_bAutoStart; // offset 0x7E1, size 0x1, align 1
    bool m_bLocalPlayerOnly; // offset 0x7E2, size 0x1, align 1
    char _pad_07E3[0x5]; // offset 0x7E3
};
