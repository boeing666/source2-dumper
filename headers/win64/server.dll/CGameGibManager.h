#pragma once

class CGameGibManager : public CBaseEntity /*0x0*/  // sizeof 0x4D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4C8]; // offset 0x0
    bool m_bAllowNewGibs; // offset 0x4C8, size 0x1, align 1
    char _pad_04C9[0x3]; // offset 0x4C9
    int32 m_iCurrentMaxPieces; // offset 0x4CC, size 0x4, align 4 | MNotSaved
    int32 m_iMaxPieces; // offset 0x4D0, size 0x4, align 4
    int32 m_iLastFrame; // offset 0x4D4, size 0x4, align 4 | MNotSaved
};
