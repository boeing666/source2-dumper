#pragma once

class CCitadelControlPointTrigger : public CTriggerMultiple /*0x0*/  // sizeof 0x980, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CEntityIOOutput m_OnFullyCaptured; // offset 0x8F8, size 0x18, align 255
    CEntityIOOutput m_OnBecomeCapturable; // offset 0x910, size 0x18, align 255
    float32 m_flInitialRadius; // offset 0x928, size 0x4, align 4 | MNetworkEnable
    float32 m_flEndRadius; // offset 0x92C, size 0x4, align 4 | MNetworkEnable
    float32 m_flProgress; // offset 0x930, size 0x4, align 4 | MNetworkEnable MNotSaved
    float32 m_flCaptureTime; // offset 0x934, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hUnlockPrereq; // offset 0x938, size 0x4, align 4 | MNetworkEnable MNotSaved
    bool m_bAvailable; // offset 0x93C, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bIsBeingCaptured; // offset 0x93D, size 0x1, align 1 | MNetworkEnable MNotSaved
    bool m_bIsBeingBlocked; // offset 0x93E, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_093F[0x9]; // offset 0x93F
    GameTime_t m_flLastTouchedTime; // offset 0x948, size 0x4, align 255 | MNotSaved
    Vector m_vecBeamTarget; // offset 0x94C, size 0xC, align 4 | MNotSaved
    Vector m_vecBeamStart; // offset 0x958, size 0xC, align 4 | MNotSaved
    ParticleIndex_t m_nFXProgressBeam; // offset 0x964, size 0x4, align 255 | MNotSaved
    CUtlSymbolLarge m_strUnlockPrereq; // offset 0x968, size 0x8, align 8
    CUtlSymbolLarge m_strBeamStart; // offset 0x970, size 0x8, align 8
    CUtlSymbolLarge m_strBeamTarget; // offset 0x978, size 0x8, align 8
};
