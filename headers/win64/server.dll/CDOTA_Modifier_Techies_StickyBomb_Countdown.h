#pragma once

class CDOTA_Modifier_Techies_StickyBomb_Countdown : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vLastLoc; // offset 0x1A78, size 0xC, align 4
    CHandle< CBaseEntity > m_hAttachTarget; // offset 0x1A84, size 0x4, align 4
};
