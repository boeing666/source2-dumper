#pragma once

class CEnvInstructorHint : public CPointEntity /*0x0*/  // sizeof 0x510, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x4A0, size 0x8, align 8
    CUtlSymbolLarge m_iszReplace_Key; // offset 0x4A8, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x4B0, size 0x8, align 8
    int32 m_iTimeout; // offset 0x4B8, size 0x4, align 4
    int32 m_iDisplayLimit; // offset 0x4BC, size 0x4, align 4
    CUtlSymbolLarge m_iszIcon_Onscreen; // offset 0x4C0, size 0x8, align 8
    CUtlSymbolLarge m_iszIcon_Offscreen; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_iszCaption; // offset 0x4D0, size 0x8, align 8
    CUtlSymbolLarge m_iszActivatorCaption; // offset 0x4D8, size 0x8, align 8
    Color m_Color; // offset 0x4E0, size 0x4, align 1
    float32 m_fIconOffset; // offset 0x4E4, size 0x4, align 4
    float32 m_fRange; // offset 0x4E8, size 0x4, align 4
    uint8 m_iPulseOption; // offset 0x4EC, size 0x1, align 1
    uint8 m_iAlphaOption; // offset 0x4ED, size 0x1, align 1
    uint8 m_iShakeOption; // offset 0x4EE, size 0x1, align 1
    bool m_bStatic; // offset 0x4EF, size 0x1, align 1
    bool m_bNoOffscreen; // offset 0x4F0, size 0x1, align 1
    bool m_bForceCaption; // offset 0x4F1, size 0x1, align 1
    char _pad_04F2[0x2]; // offset 0x4F2
    int32 m_iInstanceType; // offset 0x4F4, size 0x4, align 4
    bool m_bSuppressRest; // offset 0x4F8, size 0x1, align 1
    char _pad_04F9[0x7]; // offset 0x4F9
    CUtlSymbolLarge m_iszBinding; // offset 0x500, size 0x8, align 8
    bool m_bAllowNoDrawTarget; // offset 0x508, size 0x1, align 1
    bool m_bAutoStart; // offset 0x509, size 0x1, align 1
    bool m_bLocalPlayerOnly; // offset 0x50A, size 0x1, align 1
    char _pad_050B[0x5]; // offset 0x50B
};
