#pragma once

class CPhysPulley : public CPhysConstraint /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    VectorWS m_position2; // offset 0x7D8, size 0xC, align 4
    Vector[2] m_offset; // offset 0x7E4, size 0x18, align 4
    float32 m_addLength; // offset 0x7FC, size 0x4, align 4
    float32 m_gearRatio; // offset 0x800, size 0x4, align 4
    char _pad_0804[0x4]; // offset 0x804
};
