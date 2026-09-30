#pragma once

class CGameModifier_BodyGroupChoice : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlStringToken m_nBodyGroupName; // offset 0x140, size 0x4, align 4
    int32 m_nBodyGroupChoice; // offset 0x144, size 0x4, align 4
};
