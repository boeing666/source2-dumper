#pragma once

struct TeamKothState_t  // sizeof 0x58, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x30]; // offset 0x0
    float32 m_flCaptureProgressFrac; // offset 0x30, size 0x4, align 4 | MNetworkEnable
    int32 m_nCapturerCount; // offset 0x34, size 0x4, align 4 | MNetworkEnable
    bool m_bIsBlocked; // offset 0x38, size 0x1, align 1 | MNetworkEnable
    char _pad_0039[0x7]; // offset 0x39
    C_NetworkUtlVectorBase< HeroID_t > m_vecParticipants; // offset 0x40, size 0x18, align 8 | MNetworkEnable
};
