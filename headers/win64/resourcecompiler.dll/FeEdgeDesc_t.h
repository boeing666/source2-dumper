#pragma once

struct FeEdgeDesc_t  // sizeof 0x10, align 0x2 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[2] nEdge; // offset 0x0, size 0x4, align 2
    uint16[2][2] nSide; // offset 0x4, size 0x8, align 2
    uint16[2] nVirtElem; // offset 0xC, size 0x4, align 2
};
