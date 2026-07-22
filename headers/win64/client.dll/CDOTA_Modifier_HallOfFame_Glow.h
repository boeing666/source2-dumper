#pragma once

class CDOTA_Modifier_HallOfFame_Glow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< PlayerID_t > m_vecGlowingPlayerIDs; // offset 0x1A58, size 0x18, align 8
    CUtlVector< PlayerID_t > m_vecGlowingPlayerIDs2; // offset 0x1A70, size 0x18, align 8
};
