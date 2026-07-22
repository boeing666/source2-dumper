#pragma once

class CMorphConstraint : public CBaseConstraint /*0x0*/  // sizeof 0x80, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    CUtlString m_sTargetMorph; // offset 0x60, size 0x8, align 8
    int32 m_nSlaveChannel; // offset 0x68, size 0x4, align 4
    float32 m_flMin; // offset 0x6C, size 0x4, align 4
    float32 m_flMax; // offset 0x70, size 0x4, align 4
    char _pad_0074[0xC]; // offset 0x74
};
