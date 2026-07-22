#pragma once

class CFootPinningUpdateNode : public CUnaryUpdateNode /*0x0*/  // sizeof 0xD0, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x78]; // offset 0x0
    FootPinningPoseOpFixedData_t m_poseOpFixedData; // offset 0x78, size 0x30, align 8
    FootPinningTimingSource m_eTimingSource; // offset 0xA8, size 0x4, align 4
    char _pad_00AC[0x4]; // offset 0xAC
    CUtlVector< CAnimParamHandle > m_params; // offset 0xB0, size 0x18, align 8
    bool m_bResetChild; // offset 0xC8, size 0x1, align 1
    char _pad_00C9[0x7]; // offset 0xC9
};
