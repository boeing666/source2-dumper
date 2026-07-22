#pragma once

struct constraint_hingeparams_t  // sizeof 0x40, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    VectorWS worldPosition; // offset 0x0, size 0xC, align 4
    Vector worldAxisDirection; // offset 0xC, size 0xC, align 4
    constraint_axislimit_t hingeAxis; // offset 0x18, size 0x10, align 255 | MNotSaved
    constraint_breakableparams_t constraint; // offset 0x28, size 0x18, align 255 | MNotSaved
};
