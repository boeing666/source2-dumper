#pragma once

class CDOTA_Modifier_Largo_AmphibianRhapsody_Self_Tracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nNumSuccess; // offset 0x1AF8, size 0x4, align 4
    int32 m_nNumFail; // offset 0x1AFC, size 0x4, align 4
    int32 m_nNumExpire; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
    CUtlVector< int32 > m_vecSongsPlayed; // offset 0x1B08, size 0x18, align 8
};
