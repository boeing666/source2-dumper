#pragma once

struct PlayOfTheGamePlaybackData_t  // sizeof 0x90, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    CNetworkUtlVectorBase< CPlayerSlot > m_vecParticipants; // offset 0x8, size 0x18, align 8 | MNetworkEnable
    CUtlVectorEmbeddedNetworkVar< PlayOfTheGameTrigger_t > m_vecTriggers; // offset 0x20, size 0x68, align 8 | MNetworkEnable
    GameTime_t m_tBeginTimeWithPrewarm; // offset 0x88, size 0x4, align 255 | MNetworkEnable
    GameTime_t m_tEndTime; // offset 0x8C, size 0x4, align 255 | MNetworkEnable
};
