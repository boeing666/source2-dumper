#pragma once

class CNPC_Ratking_Rat : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xE00, size 0x4, align 4
    char _pad_0E04[0x2C]; // offset 0xE04
    Vector m_vFlightVelocity; // offset 0xE30, size 0xC, align 4
    Vector m_vRunDir; // offset 0xE3C, size 0xC, align 4
};
