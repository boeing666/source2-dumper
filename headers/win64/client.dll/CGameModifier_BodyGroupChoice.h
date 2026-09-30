#pragma once

class CGameModifier_BodyGroupChoice : public CCitadelModifier /*0x0*/  // sizeof 0x138, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlStringToken m_nBodyGroupName; // offset 0x130, size 0x4, align 4
    int32 m_nBodyGroupChoice; // offset 0x134, size 0x4, align 4
};
