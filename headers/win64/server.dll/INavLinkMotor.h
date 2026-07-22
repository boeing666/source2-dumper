#pragma once

class INavLinkMotor  // sizeof 0x18, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CHandle< CAI_BaseNPC > m_hNPC; // offset 0x8, size 0x4, align 4
    Navigation_t m_eNavType; // offset 0xC, size 0x4, align 4
    int32 m_eLifetimeState; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
