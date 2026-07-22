#pragma once

struct ItemDraftRoundState_t  // sizeof 0x88, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    C_UtlVectorEmbeddedNetworkVar< ItemDraftOption_t > m_vecOptions; // offset 0x8, size 0x68, align 8 | MNetworkEnable
    ItemDraftRoundID_t m_nID; // offset 0x70, size 0x4, align 255 | MNetworkEnable
    int32 m_nDraftsRemaining; // offset 0x74, size 0x4, align 4 | MNetworkEnable
    int32 m_nDraftsTotal; // offset 0x78, size 0x4, align 4 | MNetworkEnable
    int32 m_nRoundsRemaining; // offset 0x7C, size 0x4, align 4 | MNetworkEnable
    int32 m_nRoundsTotal; // offset 0x80, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flCompletedTime; // offset 0x84, size 0x4, align 255
};
