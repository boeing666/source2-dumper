#pragma once

class CAimConstraint : public CBaseConstraint /*0x0*/  // sizeof 0x80, align 0x10 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    Quaternion m_qAimOffset; // offset 0x60, size 0x10, align 16
    uint32 m_nUpType; // offset 0x70, size 0x4, align 4
    char _pad_0074[0xC]; // offset 0x74
};
