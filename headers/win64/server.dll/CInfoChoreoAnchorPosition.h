#pragma once

class CInfoChoreoAnchorPosition  // sizeof 0x60, align 0x10 [trivial_dtor] (server) {MGetKV3ClassDefaults}
{
public:
    Vector m_vOriginLS; // offset 0x0, size 0xC, align 4
    char _pad_000C[0x4]; // offset 0xC
    Quaternion m_qAnglesLS; // offset 0x10, size 0x10, align 16
    Vector m_vExtentsMin; // offset 0x20, size 0xC, align 4
    Vector m_vExtentsMax; // offset 0x2C, size 0xC, align 4
    float32 m_flRadius; // offset 0x38, size 0x4, align 4
    float32 m_flToleranceAngle; // offset 0x3C, size 0x4, align 4
    bool m_bOnlyWarpPosition; // offset 0x40, size 0x1, align 1
    bool m_bDontSnapToNav; // offset 0x41, size 0x1, align 1
    bool m_bDontSnapToGround; // offset 0x42, size 0x1, align 1
    char _pad_0043[0x1]; // offset 0x43
    float32 m_flMaxDistanceFromNav; // offset 0x44, size 0x4, align 4
    float32 m_flGroundTraceDistance; // offset 0x48, size 0x4, align 4
    CHandle< CBaseEntity > m_hParent; // offset 0x4C, size 0x4, align 4
    CInfoChoreoLocatorShapeType_t m_nShapeType; // offset 0x50, size 0x4, align 4
    char _pad_0054[0xC]; // offset 0x54
};
