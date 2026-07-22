#pragma once

struct FeCtrlSoftOffset_t  // sizeof 0x14, align 0x4 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 nCtrlParent; // offset 0x0, size 0x2, align 2
    uint16 nCtrlChild; // offset 0x2, size 0x2, align 2
    Vector vOffset; // offset 0x4, size 0xC, align 4
    float32 flAlpha; // offset 0x10, size 0x4, align 4
};
