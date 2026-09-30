#pragma once

class CAI_FacingServices : public CAI_Component /*0x0*/  // sizeof 0x248, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CAI_InterestTarget[9] m_pEntityFacingRequests; // offset 0x48, size 0x1D4, align 4
    AI_ScheduleFacingTargetPriority_t m_eScheduleFacingRequestPriority; // offset 0x21C, size 0x1, align 1
    AI_Strafing_t[7] m_strafingRequests; // offset 0x21D, size 0x7, align 1
    bool[2] m_pEnableForceFacing; // offset 0x224, size 0x2, align 1
    uint8 m_nEntityFacingLockCount; // offset 0x226, size 0x1, align 1 | MNotSaved
    char _pad_0227[0x1]; // offset 0x227
    CUtlVector< ChoreoEntityFacing_t > m_vecChoreoEntityFacings; // offset 0x228, size 0x18, align 8 | MNotSaved
    bool m_bFailedTargetValidation; // offset 0x240, size 0x1, align 1 | MNotSaved
    char _pad_0241[0x7]; // offset 0x241
};
