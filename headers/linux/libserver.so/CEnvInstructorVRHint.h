#pragma once

class CEnvInstructorVRHint : public CPointEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x778, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x780, size 0x8, align 8
    int32 m_iTimeout; // offset 0x788, size 0x4, align 4
    char _pad_078C[0x4]; // offset 0x78C
    CUtlSymbolLarge m_iszCaption; // offset 0x790, size 0x8, align 8
    CUtlSymbolLarge m_iszStartSound; // offset 0x798, size 0x8, align 8
    int32 m_iLayoutFileType; // offset 0x7A0, size 0x4, align 4
    char _pad_07A4[0x4]; // offset 0x7A4
    CUtlSymbolLarge m_iszCustomLayoutFile; // offset 0x7A8, size 0x8, align 8
    int32 m_iAttachType; // offset 0x7B0, size 0x4, align 4
    float32 m_flHeightOffset; // offset 0x7B4, size 0x4, align 4
};
