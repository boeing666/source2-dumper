#pragma once

class CStateNodeStateData  // sizeof 0x18, align 0x8 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CAnimUpdateNodeRef m_pChild; // offset 0x0, size 0x10, align 8
    uint8_t m_bExclusiveRootMotion : 1; // offset 0x0
    uint8_t m_bExclusiveRootMotionFirstFrame : 1; // offset 0x0
    char _pad_0010[0x8]; // offset 0x10
};
