#pragma once

class CDOTA_Tree : public CObstructionObject /*0x0*/  // sizeof 0x20, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x14]; // offset 0x0
    bool m_bStanding; // offset 0x14, size 0x1, align 1
    bool m_bSpecialConsume; // offset 0x15, size 0x1, align 1
    bool m_bSpecialConsumeSameTeamOnly; // offset 0x16, size 0x1, align 1
    bool m_bSpecialPathing; // offset 0x17, size 0x1, align 1
    int32 m_iTreePlanterTeam; // offset 0x18, size 0x4, align 4
    uint32 m_unOccluderID; // offset 0x1C, size 0x4, align 4
};
