#pragma once

class CQuaternionAnimParameter : public CConcreteAnimParameter /*0x0*/  // sizeof 0xA0, align 0x10 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x80]; // offset 0x0
    Quaternion m_defaultValue; // offset 0x80, size 0x10, align 16 | MPropertySuppressField
    bool m_bInterpolate; // offset 0x90, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0091[0xF]; // offset 0x91
};
