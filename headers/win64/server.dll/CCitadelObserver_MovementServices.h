#pragma once

class CCitadelObserver_MovementServices : public CPlayer_MovementServices /*0x0*/  // sizeof 0x260, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x258]; // offset 0x0
    float32 m_flRoamingSpeed; // offset 0x258, size 0x4, align 4
    bool m_bHasFreeCursor; // offset 0x25C, size 0x1, align 1
    char _pad_025D[0x3]; // offset 0x25D
};
