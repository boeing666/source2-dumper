#pragma once

class CWarpSectionAnimTag : public CWarpSectionAnimTagBase /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x49]; // offset 0x0
    bool m_bWarpPosition; // offset 0x49, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bWarpOrientation; // offset 0x4A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_004B[0x5]; // offset 0x4B
};
