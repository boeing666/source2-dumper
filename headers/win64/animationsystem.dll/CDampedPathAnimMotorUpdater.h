#pragma once

class CDampedPathAnimMotorUpdater : public CPathAnimMotorUpdaterBase /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x2C]; // offset 0x0
    float32 m_flAnticipationTime; // offset 0x2C, size 0x4, align 4
    float32 m_flMinSpeedScale; // offset 0x30, size 0x4, align 4
    CAnimParamHandle m_hAnticipationPosParam; // offset 0x34, size 0x2, align 1
    CAnimParamHandle m_hAnticipationHeadingParam; // offset 0x36, size 0x2, align 1
    float32 m_flSpringConstant; // offset 0x38, size 0x4, align 4
    float32 m_flMinSpringTension; // offset 0x3C, size 0x4, align 4
    float32 m_flMaxSpringTension; // offset 0x40, size 0x4, align 4
    char _pad_0044[0x4]; // offset 0x44
};
