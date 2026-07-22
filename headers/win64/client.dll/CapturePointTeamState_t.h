#pragma once

struct CapturePointTeamState_t  // sizeof 0xC, align 0x4 [trivial_dtor] (client) {MNetworkStructNotInNetworkUtlVectorEmbedded MGetKV3ClassDefaults}
{
    float32 m_flCaptureProgress; // offset 0x0, size 0x4, align 4 | MNetworkEnable
    int32 m_nCapturerCount; // offset 0x4, size 0x4, align 4 | MNetworkEnable
    bool m_bIsBlocked; // offset 0x8, size 0x1, align 1 | MNetworkEnable
    char _pad_0009[0x3]; // offset 0x9
};
