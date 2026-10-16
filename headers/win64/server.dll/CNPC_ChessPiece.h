#pragma once

class CNPC_ChessPiece : public CAI_CitadelNPC /*0x0*/  // sizeof 0x1750, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x1710]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1710, size 0x4, align 255
    GameTime_t m_tCooldownEndTime; // offset 0x1714, size 0x4, align 255
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0x1718, size 0x4, align 4
    int32 m_iChessPieceState; // offset 0x171C, size 0x4, align 4
    int32 m_iChessPieceType; // offset 0x1720, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x1724, size 0x4, align 4
    char _pad_1728[0xC]; // offset 0x1728
    float32 m_flLifetime; // offset 0x1734, size 0x4, align 4
    char _pad_1738[0x18]; // offset 0x1738
};
