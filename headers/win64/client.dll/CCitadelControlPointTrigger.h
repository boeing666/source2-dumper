#pragma once

class CCitadelControlPointTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xAD0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA78]; // offset 0x0
    float32 m_flInitialRadius; // offset 0xA78, size 0x4, align 4 | MNetworkEnable
    float32 m_flEndRadius; // offset 0xA7C, size 0x4, align 4 | MNetworkEnable
    float32 m_flProgress; // offset 0xA80, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flCaptureTime; // offset 0xA84, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hUnlockPrereq; // offset 0xA88, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bAvailable; // offset 0xA8C, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bIsBeingCaptured; // offset 0xA8D, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bIsBeingBlocked; // offset 0xA8E, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0A8F[0x9]; // offset 0xA8F
    GameTime_t m_flLastTouchedTime; // offset 0xA98, size 0x4, align 255 | MNotSaved
    Vector m_vecBeamTarget; // offset 0xA9C, size 0xC, align 4 | MNotSaved
    Vector m_vecBeamStart; // offset 0xAA8, size 0xC, align 4 | MNotSaved
    ParticleIndex_t m_nFXProgressBeam; // offset 0xAB4, size 0x4, align 255 | MNotSaved
    CUtlSymbolLarge m_strUnlockPrereq; // offset 0xAB8, size 0x8, align 8
    CUtlSymbolLarge m_strBeamStart; // offset 0xAC0, size 0x8, align 8
    CUtlSymbolLarge m_strBeamTarget; // offset 0xAC8, size 0x8, align 8
};
