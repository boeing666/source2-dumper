#pragma once

struct FeBoneMergeLink_t  // sizeof 0x8, align 0x4 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint32 m_nParentHash; // offset 0x0, size 0x4, align 4
    uint16 m_nChildNode; // offset 0x4, size 0x2, align 2
    char _pad_0006[0x2]; // offset 0x6
};
