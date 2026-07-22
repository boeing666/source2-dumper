#pragma once

class CAI_FacingServices : public CAI_Component /*0x0*/  // sizeof 0x288, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x50]; // offset 0x0
    CAI_InterestTarget[10] m_pEntityFacingRequests; // offset 0x50, size 0x208, align 4
    AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // offset 0x258, size 0x1, align 1
    AI_Strafing_t[7] m_strafingRequests; // offset 0x259, size 0x7, align 1
    bool[2] m_pEnableForceFacing; // offset 0x260, size 0x2, align 1
    uint8 m_nEntityFacingLockCount; // offset 0x262, size 0x1, align 1 | MNotSaved
    char _pad_0263[0x5]; // offset 0x263
    CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings; // offset 0x268, size 0x18, align 8 | MNotSaved
    bool m_bFailedTargetValidation; // offset 0x280, size 0x1, align 1 | MNotSaved
    char _pad_0281[0x7]; // offset 0x281
};
