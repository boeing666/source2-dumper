#pragma once

struct FeSimdQuad_t  // sizeof 0x130, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16[4][4] nNode; // offset 0x0, size 0x20, align 2
    fltx4 f4Slack; // offset 0x20, size 0x10, align 16
    FourVectors[4] vShape; // offset 0x30, size 0xC0, align 16
    fltx4[4] f4Weights; // offset 0xF0, size 0x40, align 16
};
