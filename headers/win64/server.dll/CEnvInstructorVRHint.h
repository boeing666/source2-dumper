#pragma once

class CEnvInstructorVRHint : public CPointEntity /*0x0*/  // sizeof 0x4F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    CUtlSymbolLarge m_iszName; // offset 0x4B0, size 0x8, align 8
    CUtlSymbolLarge m_iszHintTargetEntity; // offset 0x4B8, size 0x8, align 8
    int32 m_iTimeout; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
    CUtlSymbolLarge m_iszCaption; // offset 0x4C8, size 0x8, align 8
    CUtlSymbolLarge m_iszStartSound; // offset 0x4D0, size 0x8, align 8
    int32 m_iLayoutFileType; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
    CUtlSymbolLarge m_iszCustomLayoutFile; // offset 0x4E0, size 0x8, align 8
    int32 m_iAttachType; // offset 0x4E8, size 0x4, align 4
    float32 m_flHeightOffset; // offset 0x4EC, size 0x4, align 4
};
