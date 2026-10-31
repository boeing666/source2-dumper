#pragma once

class CTwistConstraint : public CBaseConstraint /*0x0*/  // sizeof 0x90, align 0x10 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    bool m_bInverse; // offset 0x60, size 0x1, align 1
    char _pad_0061[0xF]; // offset 0x61
    Quaternion m_qParentBindRotation; // offset 0x70, size 0x10, align 16
    Quaternion m_qChildBindRotation; // offset 0x80, size 0x10, align 16
};
