#pragma once

class CMoverInstanceData  // sizeof 0x2C, align 0x4 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    float32 m_flDampedValue; // offset 0x0, size 0x4, align 4
    Vector m_vMovement; // offset 0x4, size 0xC, align 4
    char _pad_0010[0xC]; // offset 0x10
    CRotation m_Rotation; // offset 0x1C, size 0x4, align 4
    CRotation m_TargetOrientation; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x8]; // offset 0x24
};
