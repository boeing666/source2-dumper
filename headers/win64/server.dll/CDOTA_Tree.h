#pragma once

class CDOTA_Tree : public CObstructionObject /*0x0*/  // sizeof 0x28, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x18]; // offset 0x0
    bool m_bStanding; // offset 0x18, size 0x1, align 1
    bool m_bSpecialConsume; // offset 0x19, size 0x1, align 1
    bool m_bSpecialConsumeSameTeamOnly; // offset 0x1A, size 0x1, align 1
    bool m_bSpecialPathing; // offset 0x1B, size 0x1, align 1
    int32 m_iTreePlanterTeam; // offset 0x1C, size 0x4, align 4
    uint32 m_unOccluderID; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
};
