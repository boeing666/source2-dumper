#pragma once

class CRagdollConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x508]; // offset 0x0
    float32 m_xmin; // offset 0x508, size 0x4, align 4
    float32 m_xmax; // offset 0x50C, size 0x4, align 4
    float32 m_ymin; // offset 0x510, size 0x4, align 4
    float32 m_ymax; // offset 0x514, size 0x4, align 4
    float32 m_zmin; // offset 0x518, size 0x4, align 4
    float32 m_zmax; // offset 0x51C, size 0x4, align 4
    float32 m_xfriction; // offset 0x520, size 0x4, align 4
    float32 m_yfriction; // offset 0x524, size 0x4, align 4
    float32 m_zfriction; // offset 0x528, size 0x4, align 4
    char _pad_052C[0x4]; // offset 0x52C
};
