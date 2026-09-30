#pragma once

class CStayAway_PathCostAreaFilter : public INavPathCostAreaFilter /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CRelativeLocation m_target; // offset 0x8, size 0x48, align 8
    float32 m_flMinDistanceFromTarget; // offset 0x50, size 0x4, align 4
    char _pad_0054[0x4]; // offset 0x54
};
