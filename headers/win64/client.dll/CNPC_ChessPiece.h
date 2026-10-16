#pragma once

class CNPC_ChessPiece : public C_AI_CitadelNPC /*0x0*/  // sizeof 0x1BB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1B60]; // offset 0x0
    GameTime_t m_tCooldownStartTime; // offset 0x1B60, size 0x4, align 255
    GameTime_t m_tCooldownEndTime; // offset 0x1B64, size 0x4, align 255
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0x1B68, size 0x4, align 4
    int32 m_iChessPieceState; // offset 0x1B6C, size 0x4, align 4
    int32 m_iChessPieceType; // offset 0x1B70, size 0x4, align 4
    float32 m_flMeleeDamage; // offset 0x1B74, size 0x4, align 4
    char _pad_1B78[0xC]; // offset 0x1B78
    float32 m_flLifetime; // offset 0x1B84, size 0x4, align 4
    char _pad_1B88[0x10]; // offset 0x1B88
    CModifierHandleTyped< CCitadelModifier > m_hCooldownModifier; // offset 0x1B98, size 0x18, align 8
};
