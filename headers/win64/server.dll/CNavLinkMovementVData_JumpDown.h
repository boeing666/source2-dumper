#pragma once

class CNavLinkMovementVData_JumpDown : public CNavLinkMovementVData /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x118]; // offset 0x0
    CNavLinkMetrics_JumpDown m_metrics; // offset 0x118, size 0x14, align 4
    bool m_bAlignWithExitDirectionDuringFall; // offset 0x12C, size 0x1, align 1
    char _pad_012D[0x3]; // offset 0x12D
};
