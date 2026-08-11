#pragma once

class CDOTA_Modifier_Techies_Minefield_Sign_Scepter_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 aura_radius; // offset 0x1A78, size 0x4, align 4
    float32 scepter_move_damage; // offset 0x1A7C, size 0x4, align 4
    float32 scepter_move_amt; // offset 0x1A80, size 0x4, align 4
    float32 minefield_duration; // offset 0x1A84, size 0x4, align 4
    float32 m_flMoveAmount; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vLastPosition; // offset 0x1A8C, size 0xC, align 4
};
