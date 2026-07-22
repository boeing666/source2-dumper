#pragma once

class CPhysLength : public CPhysConstraint /*0x0*/  // sizeof 0x528, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4F8]; // offset 0x0
    Vector[2] m_offset; // offset 0x4F8, size 0x18, align 4
    VectorWS m_vecAttach; // offset 0x510, size 0xC, align 4
    float32 m_addLength; // offset 0x51C, size 0x4, align 4
    float32 m_minLength; // offset 0x520, size 0x4, align 4
    float32 m_totalLength; // offset 0x524, size 0x4, align 4
};
