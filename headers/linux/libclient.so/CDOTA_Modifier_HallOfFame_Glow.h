#pragma once

class CDOTA_Modifier_HallOfFame_Glow : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< PlayerID_t > m_vecGlowingPlayerIDs; // offset 0x1A78, size 0x18, align 8
    CUtlVector< PlayerID_t > m_vecGlowingPlayerIDs2; // offset 0x1A90, size 0x18, align 8
};
