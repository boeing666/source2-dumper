#pragma once

class CCitadelEnergyTower : public CServerOnlyEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bEnabled; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x3]; // offset 0x4A1
    float32 m_flDamage; // offset 0x4A4, size 0x4, align 4
    float32 m_flRadius; // offset 0x4A8, size 0x4, align 4
    char _pad_04AC[0xC]; // offset 0x4AC
};
