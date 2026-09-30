#pragma once

class CCitadelControlPointTrigger : public C_BaseTrigger /*0x0*/  // sizeof 0xCF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC98]; // offset 0x0
    float32 m_flInitialRadius; // offset 0xC98, size 0x4, align 4
    float32 m_flEndRadius; // offset 0xC9C, size 0x4, align 4
    float32 m_flProgress; // offset 0xCA0, size 0x4, align 4 | MNotSaved
    float32 m_flCaptureTime; // offset 0xCA4, size 0x4, align 4
    CHandle< C_BaseEntity > m_hUnlockPrereq; // offset 0xCA8, size 0x4, align 4 | MNotSaved
    bool m_bAvailable; // offset 0xCAC, size 0x1, align 1 | MNotSaved
    bool m_bIsBeingCaptured; // offset 0xCAD, size 0x1, align 1 | MNotSaved
    bool m_bIsBeingBlocked; // offset 0xCAE, size 0x1, align 1 | MNotSaved
    char _pad_0CAF[0x9]; // offset 0xCAF
    GameTime_t m_flLastTouchedTime; // offset 0xCB8, size 0x4, align 255 | MNotSaved
    VectorWS m_vecBeamTarget; // offset 0xCBC, size 0xC, align 4 | MNotSaved
    VectorWS m_vecBeamStart; // offset 0xCC8, size 0xC, align 4 | MNotSaved
    ParticleIndex_t m_nFXProgressBeam; // offset 0xCD4, size 0x4, align 255 | MNotSaved
    CUtlSymbolLarge m_strUnlockPrereq; // offset 0xCD8, size 0x8, align 8
    CUtlSymbolLarge m_strBeamStart; // offset 0xCE0, size 0x8, align 8
    CUtlSymbolLarge m_strBeamTarget; // offset 0xCE8, size 0x8, align 8
};
