#pragma once

class CColorLookupColorCorrectionLayer : public CColorCorrectionLayer /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x28]; // offset 0x0
    CUtlString m_fileName; // offset 0x28, size 0x8, align 8
    CUtlVector< float32 > m_lut; // offset 0x30, size 0x18, align 8
    int32 m_nDim; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x4]; // offset 0x4C
};
