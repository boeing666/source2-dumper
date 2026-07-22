#pragma once

class CPoseHandle  // sizeof 0x4, align 0x2 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    uint16 m_nIndex; // offset 0x0, size 0x2, align 2
    PoseType_t m_eType; // offset 0x2, size 0x1, align 1
    char _pad_0003[0x1]; // offset 0x3
};
