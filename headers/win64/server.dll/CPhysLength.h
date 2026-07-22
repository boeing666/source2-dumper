#pragma once

class CPhysLength : public CPhysConstraint /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x508]; // offset 0x0
    Vector[2] m_offset; // offset 0x508, size 0x18, align 4
    VectorWS m_vecAttach; // offset 0x520, size 0xC, align 4
    float32 m_addLength; // offset 0x52C, size 0x4, align 4
    float32 m_minLength; // offset 0x530, size 0x4, align 4
    float32 m_totalLength; // offset 0x534, size 0x4, align 4
};
