#pragma once

class CRagdollConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7E8]; // offset 0x0
    float32 m_xmin; // offset 0x7E8, size 0x4, align 4
    float32 m_xmax; // offset 0x7EC, size 0x4, align 4
    float32 m_ymin; // offset 0x7F0, size 0x4, align 4
    float32 m_ymax; // offset 0x7F4, size 0x4, align 4
    float32 m_zmin; // offset 0x7F8, size 0x4, align 4
    float32 m_zmax; // offset 0x7FC, size 0x4, align 4
    float32 m_xfriction; // offset 0x800, size 0x4, align 4
    float32 m_yfriction; // offset 0x804, size 0x4, align 4
    float32 m_zfriction; // offset 0x808, size 0x4, align 4
    char _pad_080C[0x4]; // offset 0x80C
};
