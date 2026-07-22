#pragma once

class CAnimMovement  // sizeof 0x2C, align 0x4 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int32 endframe; // offset 0x0, size 0x4, align 4
    int32 motionflags; // offset 0x4, size 0x4, align 4
    float32 v0; // offset 0x8, size 0x4, align 4
    float32 v1; // offset 0xC, size 0x4, align 4
    float32 angle; // offset 0x10, size 0x4, align 4
    Vector vector; // offset 0x14, size 0xC, align 4
    Vector position; // offset 0x20, size 0xC, align 4
};
