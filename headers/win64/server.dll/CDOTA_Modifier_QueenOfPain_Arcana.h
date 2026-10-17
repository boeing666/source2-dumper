#pragma once

class CDOTA_Modifier_QueenOfPain_Arcana : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlOrderedMap< PlayerID_t, bool > m_vecHitPlayers; // offset 0x1AA8, size 0x28, align 8
    CUtlOrderedMap< PlayerID_t, bool > m_vecKilledPlayers; // offset 0x1AD0, size 0x28, align 8
    GameTime_t m_flLastSonicWaveCast; // offset 0x1AF8, size 0x4, align 255
    bool m_bSpeechComplete; // offset 0x1AFC, size 0x1, align 1
    bool m_bMessageComplete; // offset 0x1AFD, size 0x1, align 1
    bool m_bIsMeleeAttack; // offset 0x1AFE, size 0x1, align 1
    char _pad_1AFF[0x1]; // offset 0x1AFF
};
