#pragma once

struct DampedPathMotorInstanceData_t  // sizeof 0x28, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
    Vector m_vVelocity; // offset 0x0, size 0xC, align 4
    Vector m_vAcceleration; // offset 0xC, size 0xC, align 4
    char _pad_0018[0xC]; // offset 0x18
    bool m_bStopping; // offset 0x24, size 0x1, align 1
    char _pad_0025[0x3]; // offset 0x25
};
