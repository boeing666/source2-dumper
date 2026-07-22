#pragma once

class CColorBalanceColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    int32 m_nRedCyanBalS; // offset 0x28, size 0x4, align 4
    int32 m_nRedCyanBalM; // offset 0x2C, size 0x4, align 4
    int32 m_nRedCyanBalH; // offset 0x30, size 0x4, align 4
    int32 m_nGreenMagentaBalS; // offset 0x34, size 0x4, align 4
    int32 m_nGreenMagentaBalM; // offset 0x38, size 0x4, align 4
    int32 m_nGreenMagentaBalH; // offset 0x3C, size 0x4, align 4
    int32 m_nBlueYellowBalS; // offset 0x40, size 0x4, align 4
    int32 m_nBlueYellowBalM; // offset 0x44, size 0x4, align 4
    int32 m_nBlueYellowBalH; // offset 0x48, size 0x4, align 4
    bool m_bPreserveLuminosity; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
};
