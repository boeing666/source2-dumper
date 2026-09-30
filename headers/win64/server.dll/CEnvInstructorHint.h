#pragma once

class CEnvInstructorHint : public CPointEntity /*0x0*/  // sizeof 0x520, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszReplace_Key; // offset 0x4B8, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x4C0, size 0x8, align 8
    int32 m_iTimeout; // offset 0x4C8, size 0x4, align 4
    int32 m_iDisplayLimit; // offset 0x4CC, size 0x4, align 4
    CUtlSymbolLarge m_iszIcon_Onscreen; // offset 0x4D0, size 0x8, align 8
    CUtlSymbolLarge m_iszIcon_Offscreen; // offset 0x4D8, size 0x8, align 8
    CUtlSymbolLarge m_iszCaption; // offset 0x4E0, size 0x8, align 8
    CUtlSymbolLarge m_iszActivatorCaption; // offset 0x4E8, size 0x8, align 8
    Color m_Color; // offset 0x4F0, size 0x4, align 4
    float32 m_fIconOffset; // offset 0x4F4, size 0x4, align 4
    float32 m_fRange; // offset 0x4F8, size 0x4, align 4
    uint8 m_iPulseOption; // offset 0x4FC, size 0x1, align 1
    uint8 m_iAlphaOption; // offset 0x4FD, size 0x1, align 1
    uint8 m_iShakeOption; // offset 0x4FE, size 0x1, align 1
    bool m_bStatic; // offset 0x4FF, size 0x1, align 1
    bool m_bNoOffscreen; // offset 0x500, size 0x1, align 1
    bool m_bForceCaption; // offset 0x501, size 0x1, align 1
    char _pad_0502[0x2]; // offset 0x502
    int32 m_iInstanceType; // offset 0x504, size 0x4, align 4
    bool m_bSuppressRest; // offset 0x508, size 0x1, align 1
    char _pad_0509[0x7]; // offset 0x509
    CUtlSymbolLarge m_iszBinding; // offset 0x510, size 0x8, align 8
    bool m_bAllowNoDrawTarget; // offset 0x518, size 0x1, align 1
    bool m_bAutoStart; // offset 0x519, size 0x1, align 1
    bool m_bLocalPlayerOnly; // offset 0x51A, size 0x1, align 1
    char _pad_051B[0x5]; // offset 0x51B
};
