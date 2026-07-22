#pragma once

class CAI_InterestTarget  // sizeof 0x34, align 0xFF [trivial_dtor] (server)
{
public:
    CHandle< CBaseEntity > m_hTarget; // offset 0x0, size 0x4, align 4
    VectorWS m_vPosition; // offset 0x4, size 0xC, align 4
    Vector m_vDirection; // offset 0x10, size 0xC, align 4
    bool m_bDiscardOutsideViewcone; // offset 0x1C, size 0x1, align 1
    char _pad_001D[0x3]; // offset 0x1D
    ChoreoLookAtMode_t m_nLookAtMode; // offset 0x20, size 0x4, align 4
    ChoreoLookAtSpeed_t m_nLookAtSpeed; // offset 0x24, size 0x4, align 4
    CAI_InterestTarget::Type_t m_eType; // offset 0x28, size 0x4, align 4
    WorldGroupId_t m_nWorldGroupId; // offset 0x2C, size 0x4, align 4
    GameTime_t m_flEndTime; // offset 0x30, size 0x4, align 255
};
