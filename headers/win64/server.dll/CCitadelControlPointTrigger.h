#pragma once

class CCitadelControlPointTrigger : public CTriggerMultiple /*0x0*/  // sizeof 0xA90, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA08]; // offset 0x0
    CEntityIOOutput m_OnFullyCaptured; // offset 0xA08, size 0x18, align 255
    CEntityIOOutput m_OnBecomeCapturable; // offset 0xA20, size 0x18, align 255
    float32 m_flInitialRadius; // offset 0xA38, size 0x4, align 4
    float32 m_flEndRadius; // offset 0xA3C, size 0x4, align 4
    float32 m_flProgress; // offset 0xA40, size 0x4, align 4 | MNotSaved
    float32 m_flCaptureTime; // offset 0xA44, size 0x4, align 4
    CHandle< CBaseEntity > m_hUnlockPrereq; // offset 0xA48, size 0x4, align 4 | MNotSaved
    bool m_bAvailable; // offset 0xA4C, size 0x1, align 1 | MNotSaved
    bool m_bIsBeingCaptured; // offset 0xA4D, size 0x1, align 1 | MNotSaved
    bool m_bIsBeingBlocked; // offset 0xA4E, size 0x1, align 1 | MNotSaved
    char _pad_0A4F[0x9]; // offset 0xA4F
    GameTime_t m_flLastTouchedTime; // offset 0xA58, size 0x4, align 255 | MNotSaved
    VectorWS m_vecBeamTarget; // offset 0xA5C, size 0xC, align 4 | MNotSaved
    VectorWS m_vecBeamStart; // offset 0xA68, size 0xC, align 4 | MNotSaved
    ParticleIndex_t m_nFXProgressBeam; // offset 0xA74, size 0x4, align 255 | MNotSaved
    CUtlSymbolLarge m_strUnlockPrereq; // offset 0xA78, size 0x8, align 8
    CUtlSymbolLarge m_strBeamStart; // offset 0xA80, size 0x8, align 8
    CUtlSymbolLarge m_strBeamTarget; // offset 0xA88, size 0x8, align 8
};
