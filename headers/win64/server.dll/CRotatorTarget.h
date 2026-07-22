#pragma once

class CRotatorTarget : public CPointEntity /*0x0*/  // sizeof 0x4C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CEntityIOOutput m_OnArrivedAt; // offset 0x4A8, size 0x18, align 255
    RotatorTargetSpace_t m_eSpace; // offset 0x4C0, size 0x4, align 4
    char _pad_04C4[0x4]; // offset 0x4C4
};
