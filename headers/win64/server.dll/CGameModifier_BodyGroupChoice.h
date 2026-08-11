#pragma once

class CGameModifier_BodyGroupChoice : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlStringToken m_nBodyGroupName; // offset 0xD0, size 0x4, align 4
    int32 m_nBodyGroupChoice; // offset 0xD4, size 0x4, align 4
};
