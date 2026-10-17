#pragma once

class CDOTA_Modifier_Broodmother_WebWalk : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 snare_radius; // offset 0x1AA8, size 0x4, align 4
    float32 snare_duration; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vLastPosition; // offset 0x1AB0, size 0xC, align 4
    CHandle< CBaseEntity > m_hLastThinker; // offset 0x1ABC, size 0x4, align 4
};
