#pragma once

class C_OmniLight : public C_BarnLight /*0x0*/  // sizeof 0x1340, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1330]; // offset 0x0
    float32 m_flInnerAngle; // offset 0x1330, size 0x4, align 4
    float32 m_flOuterAngle; // offset 0x1334, size 0x4, align 4
    bool m_bShowLight; // offset 0x1338, size 0x1, align 1
    char _pad_1339[0x7]; // offset 0x1339
};
