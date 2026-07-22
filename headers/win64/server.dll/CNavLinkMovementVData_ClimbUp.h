#pragma once

class CNavLinkMovementVData_ClimbUp : public CNavLinkMovementVData /*0x0*/  // sizeof 0x130, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x118]; // offset 0x0
    bool m_bAlignOrientationWithEdgeNormal; // offset 0x118, size 0x1, align 1
    char _pad_0119[0x3]; // offset 0x119
    CNavLinkMetrics_ClimbUp m_metrics; // offset 0x11C, size 0x14, align 4
};
