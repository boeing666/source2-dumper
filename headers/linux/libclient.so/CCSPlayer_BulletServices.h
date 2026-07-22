#pragma once

class CCSPlayer_BulletServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0xA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    int32 m_totalHitsOnServer; // offset 0x48, size 0x4, align 4
    char _pad_004C[0x5C]; // offset 0x4C
};
