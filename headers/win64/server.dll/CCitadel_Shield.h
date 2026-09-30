#pragma once

class CCitadel_Shield : public CCitadelModelEntity /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    bool m_bAllowRotatingUp; // offset 0x9D8, size 0x1, align 1
    bool m_bFixedPosition; // offset 0x9D9, size 0x1, align 1
    char _pad_09DA[0x2]; // offset 0x9DA
    float32 m_flShieldOffset; // offset 0x9DC, size 0x4, align 4
};
