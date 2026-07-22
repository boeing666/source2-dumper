#pragma once

class CPlayerInputAnimMotorUpdater : public CAnimMotorUpdaterBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlVector< float32 > m_sampleTimes; // offset 0x20, size 0x18, align 8
    char _pad_0038[0x4]; // offset 0x38
    float32 m_flSpringConstant; // offset 0x3C, size 0x4, align 4
    float32 m_flAnticipationDistance; // offset 0x40, size 0x4, align 4
    CAnimParamHandle m_hAnticipationPosParam; // offset 0x44, size 0x2, align 1
    CAnimParamHandle m_hAnticipationHeadingParam; // offset 0x46, size 0x2, align 1
    bool m_bUseAcceleration; // offset 0x48, size 0x1, align 1
    char _pad_0049[0x7]; // offset 0x49
};
