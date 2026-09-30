#pragma once

class C_Citadel_Shield : public CCitadelModelEntity /*0x0*/  // sizeof 0xBC0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB8]; // offset 0x0
    bool m_bAllowRotatingUp; // offset 0xBB8, size 0x1, align 1
    bool m_bFixedPosition; // offset 0xBB9, size 0x1, align 1
    char _pad_0BBA[0x2]; // offset 0xBBA
    float32 m_flShieldOffset; // offset 0xBBC, size 0x4, align 4
};
