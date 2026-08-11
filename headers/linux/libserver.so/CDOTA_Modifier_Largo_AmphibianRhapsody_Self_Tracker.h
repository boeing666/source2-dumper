#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nNumSuccess; // offset 0x1A78, size 0x4, align 4
    int32 m_nNumFail; // offset 0x1A7C, size 0x4, align 4
    int32 m_nNumExpire; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x4]; // offset 0x1A84
    CUtlVector< int32 > m_vecSongsPlayed; // offset 0x1A88, size 0x18, align 8
};
