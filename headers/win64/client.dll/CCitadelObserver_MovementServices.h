#pragma once

class CCitadelObserver_MovementServices : public CPlayer_MovementServices /*0x0*/  // sizeof 0x248, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x240]; // offset 0x0
    float32 m_flRoamingSpeed; // offset 0x240, size 0x4, align 4
    bool m_bHasFreeCursor; // offset 0x244, size 0x1, align 1
    char _pad_0245[0x3]; // offset 0x245
};
