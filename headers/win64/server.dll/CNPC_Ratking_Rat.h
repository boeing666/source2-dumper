#pragma once

class CNPC_Ratking_Rat : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0x55A0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x5558]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0x5558, size 0x4, align 4
    char _pad_555C[0x2C]; // offset 0x555C
    Vector m_vFlightVelocity; // offset 0x5588, size 0xC, align 4
    Vector m_vRunDir; // offset 0x5594, size 0xC, align 4
};
