#pragma once

class CNavLinkMovementVData_JumpDown : public CNavLinkMovementVData /*0x0*/  // sizeof 0x138, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CNavLinkMetrics_JumpDown m_metrics; // offset 0x130, size 0x4, align 4
    bool m_bAlignWithExitDirectionDuringFall; // offset 0x134, size 0x1, align 1
    char _pad_0135[0x3]; // offset 0x135
};
