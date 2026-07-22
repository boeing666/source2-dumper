#pragma once

class CGameGibManager : public CBaseEntity /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x790]; // offset 0x0
    bool m_bAllowNewGibs; // offset 0x790, size 0x1, align 1
    char _pad_0791[0x3]; // offset 0x791
    int32 m_iCurrentMaxPieces; // offset 0x794, size 0x4, align 4 | MNotSaved
    int32 m_iMaxPieces; // offset 0x798, size 0x4, align 4
    int32 m_iLastFrame; // offset 0x79C, size 0x4, align 4 | MNotSaved
};
