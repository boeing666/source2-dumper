#pragma once

class CAnimBone  // sizeof 0x48, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_name; // offset 0x0, size 0x10, align 8
    int32 m_parent; // offset 0x10, size 0x4, align 4
    Vector m_pos; // offset 0x14, size 0xC, align 4
    QuaternionStorage m_quat; // offset 0x20, size 0x10, align 4
    float32 m_scale; // offset 0x30, size 0x4, align 4
    QuaternionStorage m_qAlignment; // offset 0x34, size 0x10, align 4
    int32 m_flags; // offset 0x44, size 0x4, align 4
};
