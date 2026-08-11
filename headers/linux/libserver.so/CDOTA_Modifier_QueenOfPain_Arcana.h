#pragma once

class CDOTA_Modifier_QueenOfPain_Arcana : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlOrderedMap< PlayerID_t, bool > m_vecHitPlayers; // offset 0x1A78, size 0x28, align 8
    CUtlOrderedMap< PlayerID_t, bool > m_vecKilledPlayers; // offset 0x1AA0, size 0x28, align 8
    GameTime_t m_flLastSonicWaveCast; // offset 0x1AC8, size 0x4, align 255
    bool m_bSpeechComplete; // offset 0x1ACC, size 0x1, align 1
    bool m_bMessageComplete; // offset 0x1ACD, size 0x1, align 1
    bool m_bIsMeleeAttack; // offset 0x1ACE, size 0x1, align 1
    char _pad_1ACF[0x1]; // offset 0x1ACF
};
