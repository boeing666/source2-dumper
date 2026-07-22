#pragma once

struct AI_Waypoint_t  // sizeof 0x60, align 0x8 (server) {MGetKV3ClassDefaults}
{
    VectorWS m_vPos; // offset 0x0, size 0xC, align 4
    WaypointFlags_t m_fWaypointFlags; // offset 0xC, size 0x4, align 4
    Navigation_t m_nWpType; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x14]; // offset 0x14
    float32 m_flYaw; // offset 0x28, size 0x4, align 4
    float32 m_flBoundaryDist; // offset 0x2C, size 0x4, align 4
    float32 m_flPathDistGoal; // offset 0x30, size 0x4, align 4
    CHandle< CBaseEntity > m_hPathCorner; // offset 0x34, size 0x4, align 4
    CHandle< CBaseEntity > m_hData; // offset 0x38, size 0x4, align 4
    uint32 m_nGroundNavAreaId; // offset 0x3C, size 0x4, align 4
    uint32 m_nNavLinkAreaId; // offset 0x40, size 0x4, align 4
    uint32 m_nNavBlockId; // offset 0x44, size 0x4, align 4
    NavGravity_t m_gravityOverride; // offset 0x48, size 0x10, align 255
    bool m_bGravityOverrideSet; // offset 0x58, size 0x1, align 1
    char _pad_0059[0x3]; // offset 0x59
    uint32 m_nConstrainedToMovableMeshId; // offset 0x5C, size 0x4, align 4
};
