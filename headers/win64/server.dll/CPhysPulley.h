#pragma once

class CPhysPulley : public CPhysConstraint /*0x0*/  // sizeof 0x530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    VectorWS m_position2; // offset 0x500, size 0xC, align 4
    Vector[2] m_offset; // offset 0x50C, size 0x18, align 4
    float32 m_addLength; // offset 0x524, size 0x4, align 4
    float32 m_gearRatio; // offset 0x528, size 0x4, align 4
    char _pad_052C[0x4]; // offset 0x52C
};
