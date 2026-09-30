#pragma once

class C_OmniLight : public C_BarnLight /*0x0*/  // sizeof 0xED0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xEC0]; // offset 0x0
    float32 m_flInnerAngle; // offset 0xEC0, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0xEC4, size 0x4, align 4
    bool m_bShowLight; // offset 0xEC8, size 0x1, align 1
    char _pad_0EC9[0x7]; // offset 0xEC9
};
